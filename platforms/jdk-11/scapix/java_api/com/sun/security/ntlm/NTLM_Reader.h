// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_SECURITY_NTLM_NTLM_READER_FWD
#define SCAPIX_JAVA_API_COM_SUN_SECURITY_NTLM_NTLM_READER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::security::ntlm { class NTLM_Reader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::security::ntlm::NTLM_Reader>
{
	static constexpr fixed_string class_name = "com/sun/security/ntlm/NTLM$Reader";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_SECURITY_NTLM_NTLM_READER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_SECURITY_NTLM_NTLM_READER)
#define SCAPIX_JAVA_API_COM_SUN_SECURITY_NTLM_NTLM_READER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::security::ntlm::NTLM_Reader : public jni::object_base<"com/sun/security/ntlm/NTLM$Reader",
	java::lang::Object>
{
public:


protected:

	NTLM_Reader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_SECURITY_NTLM_NTLM_READER
