// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_PRINT_MIMETYPE_FWD
#define SCAPIX_JAVA_API_JAVAX_PRINT_MIMETYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::print { class MimeType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::print::MimeType>
{
	static constexpr fixed_string class_name = "javax/print/MimeType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_MIMETYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_PRINT_MIMETYPE)
#define SCAPIX_JAVA_API_JAVAX_PRINT_MIMETYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::print::MimeType : public jni::object_base<"javax/print/MimeType",
	java::lang::Object,
	java::io::Serializable,
	java::lang::Cloneable>
{
public:

	static jni::ref<javax::print::MimeType> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::String> getMimeType() { return call_method<"getMimeType", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getMediaType() { return call_method<"getMediaType", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getMediaSubtype() { return call_method<"getMediaSubtype", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::Map> getParameterMap() { return call_method<"getParameterMap", jni::ref<java::util::Map>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }

protected:

	MimeType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_MIMETYPE
