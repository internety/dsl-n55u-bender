# These should also be autogenerated at some point
# perhaps by some perl scripts run from config.status ?
#
$(gen_ndrsrcdir)/misc.h: idl
$(ndrsrcdir)/libndr.h: $(gen_ndrsrcdir)/misc.h
$(dcerpcsrcdir)/dcerpc.h: $(dcerpcsrcdir)/dcerpc_proto.h
$(authsrcdir)/credentials/credentials.h: $(authsrcdir)/credentials/credentials_proto.h
$(libclisrcdir)/nbt/libnbt.h: $(libclisrcdir)/nbt/nbt_proto.h

include/includes.h: \
		include/config.h \
		$(gen_ndrsrcdir)/misc.h

proto::
basics:: include/includes.h idl proto
