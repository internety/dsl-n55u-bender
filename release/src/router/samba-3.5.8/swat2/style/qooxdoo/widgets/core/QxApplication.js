/* Copyright (c): 2002-2005 (Germany): United Internet, 1&1, GMX, Schlund+Partner, Alturo */
function QxApplication(){if(QxApplication._instance){return QxApplication._instance;};QxTarget.call(this);window.onload=function(){window.application.init();};QxApplication._instance=this;};QxApplication.extend(QxTarget,"QxApplication");proto._clientWindow=null;proto._activeWidget=null;proto._userApplication=null;proto.coreObjects=["QxClient","QxClientWindow","QxClientDocument","QxWidget","QxEventManager","QxFocusManager","QxTarget","QxEvent","QxMouseEvent","QxKeyEvent"];proto.initcheck=function(){var ok=true;if(!document.body){return;};var c=this.coreObjects;for(var i=0,cl=c.length;i<cl;i++){if(typeof window[c[i]]!="function"){ok=false;};};if(ok){window.clearInterval(this._loadHandle);return this.init();};};proto.init=function(){window._appstart=(new Date).valueOf();var irun=(window._appstart-window._start);var iobj=QxObject._i3.length;var iper=String(irun/iobj);iper=iper.substring(0,iper.indexOf(".")+4)+"ms";this.debug("Init Runtime:"+irun+"ms");this.debug("Init Object Count:"+iobj);this.debug("Init Object Perf:"+iper);this._clientWindow=new QxClientWindow(window);if(typeof window.application.main=="function"){window.application.main();};window._appstop=window._stop=(new Date).valueOf();var mrun=(window._appstop-window._appstart);var mobj=(QxObject._i3.length-iobj);var mper=String(mrun/mobj);mper=mper.substring(0,mper.indexOf(".")+4)+"ms";this.debug("Main Runtime:"+mrun+"ms");this.debug("Main Object Count:"+mobj);this.debug("Main Object Perf:"+mper);};proto.setActiveWidget=function(v){this._activeWidget=v;};proto.getActiveWidget=function(){return this._activeWidget;};proto.getClientWindow=function(){return this._clientWindow;};proto.getPath=function(){var p=window.location.href;var v=p.substring(0,p.lastIndexOf("/"));return v;};proto.getUserApplication=function(){return this._userApplication;};proto.setUserApplication=function(userApplication){this._userApplication=userApplication;};proto.dispose=function(){if(this.getDisposed()){return;};var dispose_start=(new Date).valueOf();if(this._clientWindow){this._clientWindow.dispose();this._clientWindow=null;};this._activeWidget=null;QxTarget.prototype.dispose.call(this);QxObject.dispose();QxDebug("QxApplication","Dispose total:"+((new Date).valueOf()-dispose_start)+"ms");};window.application=new QxApplication;