// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/image/ReplicateScaleFilter.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_IMAGE_AREAAVERAGINGSCALEFILTER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_AREAAVERAGINGSCALEFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::image { class AreaAveragingScaleFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::image::AreaAveragingScaleFilter>
{
	static constexpr fixed_string class_name = "java/awt/image/AreaAveragingScaleFilter";
	using base_classes = std::tuple<scapix::java_api::java::awt::image::ReplicateScaleFilter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_AREAAVERAGINGSCALEFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_IMAGE_AREAAVERAGINGSCALEFILTER)
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_AREAAVERAGINGSCALEFILTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/image/ColorModel.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::image::AreaAveragingScaleFilter : public jni::object_base<"java/awt/image/AreaAveragingScaleFilter",
	java::awt::image::ReplicateScaleFilter>
{
public:

	static jni::ref<java::awt::image::AreaAveragingScaleFilter> new_object(jint p1, jint p2) { return base_::new_object(p1, p2); }
	void setHints(jint p1) { return call_method<"setHints", void>(p1); }
	void setPixels(jint p1, jint p2, jint p3, jint p4, jni::ref<java::awt::image::ColorModel> p5, jni::ref<jni::array<jbyte>> p6, jint p7, jint p8) { return call_method<"setPixels", void>(p1, p2, p3, p4, p5, p6, p7, p8); }
	void setPixels(jint p1, jint p2, jint p3, jint p4, jni::ref<java::awt::image::ColorModel> p5, jni::ref<jni::array<jint>> p6, jint p7, jint p8) { return call_method<"setPixels", void>(p1, p2, p3, p4, p5, p6, p7, p8); }

protected:

	AreaAveragingScaleFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_AREAAVERAGINGSCALEFILTER
