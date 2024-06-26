// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_SECURITY_NTLM_NTLM_WRITER_FWD
#define SCAPIX_JAVA_API_COM_SUN_SECURITY_NTLM_NTLM_WRITER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::security::ntlm { class NTLM_Writer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::security::ntlm::NTLM_Writer>
{
	static constexpr fixed_string class_name = "com/sun/security/ntlm/NTLM$Writer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_SECURITY_NTLM_NTLM_WRITER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_SECURITY_NTLM_NTLM_WRITER)
#define SCAPIX_JAVA_API_COM_SUN_SECURITY_NTLM_NTLM_WRITER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::security::ntlm::NTLM_Writer : public jni::object_base<"com/sun/security/ntlm/NTLM$Writer",
	java::lang::Object>
{
public:


protected:

	NTLM_Writer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_SECURITY_NTLM_NTLM_WRITER
