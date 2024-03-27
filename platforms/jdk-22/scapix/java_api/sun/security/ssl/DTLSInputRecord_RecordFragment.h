// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_DTLSINPUTRECORD_RECORDFRAGMENT_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_DTLSINPUTRECORD_RECORDFRAGMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class DTLSInputRecord_RecordFragment; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::DTLSInputRecord_RecordFragment>
{
	static constexpr fixed_string class_name = "sun/security/ssl/DTLSInputRecord$RecordFragment";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_DTLSINPUTRECORD_RECORDFRAGMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_DTLSINPUTRECORD_RECORDFRAGMENT)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_DTLSINPUTRECORD_RECORDFRAGMENT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::DTLSInputRecord_RecordFragment : public jni::object_base<"sun/security/ssl/DTLSInputRecord$RecordFragment",
	java::lang::Object,
	java::lang::Comparable>
{
public:

	jint compareTo(jni::ref<sun::security::ssl::DTLSInputRecord_RecordFragment> o) { return call_method<"compareTo", jint>(o); }

protected:

	DTLSInputRecord_RecordFragment(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_DTLSINPUTRECORD_RECORDFRAGMENT