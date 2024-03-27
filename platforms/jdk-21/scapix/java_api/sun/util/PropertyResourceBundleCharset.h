// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/charset/Charset.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_PROPERTYRESOURCEBUNDLECHARSET_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_PROPERTYRESOURCEBUNDLECHARSET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util { class PropertyResourceBundleCharset; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::PropertyResourceBundleCharset>
{
	static constexpr fixed_string class_name = "sun/util/PropertyResourceBundleCharset";
	using base_classes = std::tuple<scapix::java_api::java::nio::charset::Charset>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_PROPERTYRESOURCEBUNDLECHARSET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_PROPERTYRESOURCEBUNDLECHARSET)
#define SCAPIX_JAVA_API_SUN_UTIL_PROPERTYRESOURCEBUNDLECHARSET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/charset/CharsetDecoder.h>
#include <scapix/java_api/java/nio/charset/CharsetEncoder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::util::PropertyResourceBundleCharset : public jni::object_base<"sun/util/PropertyResourceBundleCharset",
	java::nio::charset::Charset>
{
public:

	static jni::ref<sun::util::PropertyResourceBundleCharset> new_object(jboolean strictUTF8) { return base_::new_object(strictUTF8); }
	static jni::ref<sun::util::PropertyResourceBundleCharset> new_object(jni::ref<java::lang::String> canonicalName, jni::ref<jni::array<java::lang::String>> aliases) { return base_::new_object(canonicalName, aliases); }
	jboolean contains(jni::ref<java::nio::charset::Charset> cs) { return call_method<"contains", jboolean>(cs); }
	jni::ref<java::nio::charset::CharsetDecoder> newDecoder() { return call_method<"newDecoder", jni::ref<java::nio::charset::CharsetDecoder>>(); }
	jni::ref<java::nio::charset::CharsetEncoder> newEncoder() { return call_method<"newEncoder", jni::ref<java::nio::charset::CharsetEncoder>>(); }

protected:

	PropertyResourceBundleCharset(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_PROPERTYRESOURCEBUNDLECHARSET