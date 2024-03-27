// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DERINDEFLENCONVERTER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DERINDEFLENCONVERTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class DerIndefLenConverter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::DerIndefLenConverter>
{
	static constexpr fixed_string class_name = "sun/security/util/DerIndefLenConverter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DERINDEFLENCONVERTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DERINDEFLENCONVERTER)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DERINDEFLENCONVERTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::util::DerIndefLenConverter : public jni::object_base<"sun/security/util/DerIndefLenConverter",
	java::lang::Object>
{
public:

	static jni::ref<jni::array<jbyte>> convertStream(jni::ref<java::io::InputStream> in, jbyte tag) { return call_static_method<"convertStream", jni::ref<jni::array<jbyte>>>(in, tag); }

protected:

	DerIndefLenConverter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_DERINDEFLENCONVERTER