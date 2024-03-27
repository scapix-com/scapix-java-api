// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_RESOLUTIONSYNTAX_FWD
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_RESOLUTIONSYNTAX_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::print::attribute { class ResolutionSyntax; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::print::attribute::ResolutionSyntax>
{
	static constexpr fixed_string class_name = "javax/print/attribute/ResolutionSyntax";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_RESOLUTIONSYNTAX_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_RESOLUTIONSYNTAX)
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_RESOLUTIONSYNTAX

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::print::attribute::ResolutionSyntax : public jni::object_base<"javax/print/attribute/ResolutionSyntax",
	java::lang::Object,
	java::io::Serializable,
	java::lang::Cloneable>
{
public:

	static jint DPI() { return get_static_field<"DPI", jint>(); }
	static jint DPCM() { return get_static_field<"DPCM", jint>(); }

	static jni::ref<javax::print::attribute::ResolutionSyntax> new_object(jint p1, jint p2, jint p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<jni::array<jint>> getResolution(jint p1) { return call_method<"getResolution", jni::ref<jni::array<jint>>>(p1); }
	jint getCrossFeedResolution(jint p1) { return call_method<"getCrossFeedResolution", jint>(p1); }
	jint getFeedResolution(jint p1) { return call_method<"getFeedResolution", jint>(p1); }
	jni::ref<java::lang::String> toString(jint p1, jni::ref<java::lang::String> p2) { return call_method<"toString", jni::ref<java::lang::String>>(p1, p2); }
	jboolean lessThanOrEquals(jni::ref<javax::print::attribute::ResolutionSyntax> p1) { return call_method<"lessThanOrEquals", jboolean>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ResolutionSyntax(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_RESOLUTIONSYNTAX
