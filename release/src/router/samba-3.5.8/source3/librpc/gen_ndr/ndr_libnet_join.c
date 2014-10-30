/* parser auto-generated by pidl */

#include "includes.h"
#include "librpc/gen_ndr/ndr_libnet_join.h"

#include "librpc/gen_ndr/ndr_wkssvc.h"
#include "librpc/gen_ndr/ndr_security.h"
_PUBLIC_ void ndr_print_libnet_JoinCtx(struct ndr_print *ndr, const char *name, int flags, const struct libnet_JoinCtx *r)
{
	ndr_print_struct(ndr, name, "libnet_JoinCtx");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "libnet_JoinCtx");
		ndr->depth++;
		ndr_print_string(ndr, "dc_name", r->in.dc_name);
		ndr_print_string(ndr, "machine_name", r->in.machine_name);
		ndr_print_ptr(ndr, "domain_name", r->in.domain_name);
		ndr->depth++;
		ndr_print_string(ndr, "domain_name", r->in.domain_name);
		ndr->depth--;
		ndr_print_string(ndr, "account_ou", r->in.account_ou);
		ndr_print_string(ndr, "admin_account", r->in.admin_account);
#ifdef DEBUG_PASSWORD
		ndr_print_string(ndr, "admin_password", r->in.admin_password);
		ndr_print_string(ndr, "machine_password", r->in.machine_password);
#else
		ndr_print_ptr(ndr, "admin_password", r->in.admin_password);
		ndr_print_ptr(ndr, "machine_password", r->in.machine_password);
#endif
		ndr_print_wkssvc_joinflags(ndr, "join_flags", r->in.join_flags);
		ndr_print_string(ndr, "os_version", r->in.os_version);
		ndr_print_string(ndr, "os_name", r->in.os_name);
		ndr_print_uint8(ndr, "create_upn", r->in.create_upn);
		ndr_print_string(ndr, "upn", r->in.upn);
		ndr_print_uint8(ndr, "modify_config", r->in.modify_config);
		ndr_print_ptr(ndr, "ads", r->in.ads);
		ndr->depth++;
		ndr_print_ads_struct(ndr, "ads", r->in.ads);
		ndr->depth--;
		ndr_print_uint8(ndr, "debug", r->in.debug);
		ndr_print_uint8(ndr, "use_kerberos", r->in.use_kerberos);
		ndr_print_netr_SchannelType(ndr, "secure_channel_type", r->in.secure_channel_type);
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "libnet_JoinCtx");
		ndr->depth++;
		ndr_print_string(ndr, "account_name", r->out.account_name);
		ndr_print_string(ndr, "netbios_domain_name", r->out.netbios_domain_name);
		ndr_print_string(ndr, "dns_domain_name", r->out.dns_domain_name);
		ndr_print_string(ndr, "forest_name", r->out.forest_name);
		ndr_print_string(ndr, "dn", r->out.dn);
		ndr_print_ptr(ndr, "domain_sid", r->out.domain_sid);
		ndr->depth++;
		ndr_print_dom_sid(ndr, "domain_sid", r->out.domain_sid);
		ndr->depth--;
		ndr_print_uint8(ndr, "modified_config", r->out.modified_config);
		ndr_print_string(ndr, "error_string", r->out.error_string);
		ndr_print_uint8(ndr, "domain_is_ad", r->out.domain_is_ad);
		ndr_print_WERROR(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

_PUBLIC_ void ndr_print_libnet_UnjoinCtx(struct ndr_print *ndr, const char *name, int flags, const struct libnet_UnjoinCtx *r)
{
	ndr_print_struct(ndr, name, "libnet_UnjoinCtx");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "libnet_UnjoinCtx");
		ndr->depth++;
		ndr_print_string(ndr, "dc_name", r->in.dc_name);
		ndr_print_string(ndr, "machine_name", r->in.machine_name);
		ndr_print_string(ndr, "domain_name", r->in.domain_name);
		ndr_print_string(ndr, "account_ou", r->in.account_ou);
		ndr_print_string(ndr, "admin_account", r->in.admin_account);
#ifdef DEBUG_PASSWORD
		ndr_print_string(ndr, "admin_password", r->in.admin_password);
		ndr_print_string(ndr, "machine_password", r->in.machine_password);
#else
		ndr_print_ptr(ndr, "admin_password", r->in.admin_password);
		ndr_print_ptr(ndr, "machine_password", r->in.machine_password);
#endif
		ndr_print_wkssvc_joinflags(ndr, "unjoin_flags", r->in.unjoin_flags);
		ndr_print_uint8(ndr, "delete_machine_account", r->in.delete_machine_account);
		ndr_print_uint8(ndr, "modify_config", r->in.modify_config);
		ndr_print_ptr(ndr, "domain_sid", r->in.domain_sid);
		ndr->depth++;
		ndr_print_dom_sid(ndr, "domain_sid", r->in.domain_sid);
		ndr->depth--;
		ndr_print_ptr(ndr, "ads", r->in.ads);
		ndr->depth++;
		ndr_print_ads_struct(ndr, "ads", r->in.ads);
		ndr->depth--;
		ndr_print_uint8(ndr, "debug", r->in.debug);
		ndr_print_uint8(ndr, "use_kerberos", r->in.use_kerberos);
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "libnet_UnjoinCtx");
		ndr->depth++;
		ndr_print_string(ndr, "netbios_domain_name", r->out.netbios_domain_name);
		ndr_print_string(ndr, "dns_domain_name", r->out.dns_domain_name);
		ndr_print_string(ndr, "forest_name", r->out.forest_name);
		ndr_print_uint8(ndr, "modified_config", r->out.modified_config);
		ndr_print_string(ndr, "error_string", r->out.error_string);
		ndr_print_uint8(ndr, "disabled_machine_account", r->out.disabled_machine_account);
		ndr_print_uint8(ndr, "deleted_machine_account", r->out.deleted_machine_account);
		ndr_print_WERROR(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

