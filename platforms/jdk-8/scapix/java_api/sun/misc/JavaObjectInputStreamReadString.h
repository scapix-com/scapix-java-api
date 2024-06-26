// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_JAVAOBJECTINPUTSTREAMREADSTRING_FWD
#define SCAPIX_JAVA_API_SUN_MISC_JAVAOBJECTINPUTSTREAMREADSTRING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class JavaObjectInputStreamReadString; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::JavaObjectInputStreamReadString>
{
	static constexpr fixed_string class_name = "sun/misc/JavaObjectInputStreamReadString";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_JAVAOBJECTINPUTSTREAMREADSTRING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_JAVAOBJECTINPUTSTREAMREADSTRING)
#define SCAPIX_JAVA_API_SUN_MISC_JAVAOBJECTINPUTSTREAMREADSTRING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/ObjectInputStream.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::misc::JavaObjectInputStreamReadString : public jni::object_base<"sun/misc/JavaObjectInputStreamReadString",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> readString(jni::ref<java::io::ObjectInputStream> p1) { return call_method<"readString", jni::ref<java::lang::String>>(p1); }

protected:

	JavaObjectInputStreamReadString(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_JAVAOBJECTINPUTSTREAMREADSTRING
