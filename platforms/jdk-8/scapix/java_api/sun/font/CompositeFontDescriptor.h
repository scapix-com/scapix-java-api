// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_FONT_COMPOSITEFONTDESCRIPTOR_FWD
#define SCAPIX_JAVA_API_SUN_FONT_COMPOSITEFONTDESCRIPTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::font { class CompositeFontDescriptor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::font::CompositeFontDescriptor>
{
	static constexpr fixed_string class_name = "sun/font/CompositeFontDescriptor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_COMPOSITEFONTDESCRIPTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_FONT_COMPOSITEFONTDESCRIPTOR)
#define SCAPIX_JAVA_API_SUN_FONT_COMPOSITEFONTDESCRIPTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::font::CompositeFontDescriptor : public jni::object_base<"sun/font/CompositeFontDescriptor",
	java::lang::Object>
{
public:

	static jni::ref<sun::font::CompositeFontDescriptor> new_object(jni::ref<java::lang::String> p1, jint p2, jni::ref<jni::array<java::lang::String>> p3, jni::ref<jni::array<java::lang::String>> p4, jni::ref<jni::array<jint>> p5, jni::ref<jni::array<jint>> p6) { return base_::new_object(p1, p2, p3, p4, p5, p6); }
	jni::ref<java::lang::String> getFaceName() { return call_method<"getFaceName", jni::ref<java::lang::String>>(); }
	jint getCoreComponentCount() { return call_method<"getCoreComponentCount", jint>(); }
	jni::ref<jni::array<java::lang::String>> getComponentFaceNames() { return call_method<"getComponentFaceNames", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<java::lang::String>> getComponentFileNames() { return call_method<"getComponentFileNames", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<jint>> getExclusionRanges() { return call_method<"getExclusionRanges", jni::ref<jni::array<jint>>>(); }
	jni::ref<jni::array<jint>> getExclusionRangeLimits() { return call_method<"getExclusionRangeLimits", jni::ref<jni::array<jint>>>(); }

protected:

	CompositeFontDescriptor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_COMPOSITEFONTDESCRIPTOR