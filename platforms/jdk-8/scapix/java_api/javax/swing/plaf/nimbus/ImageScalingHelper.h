// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_IMAGESCALINGHELPER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_IMAGESCALINGHELPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::nimbus { class ImageScalingHelper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::nimbus::ImageScalingHelper>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/nimbus/ImageScalingHelper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_IMAGESCALINGHELPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_IMAGESCALINGHELPER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_IMAGESCALINGHELPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/Image.h>
#include <scapix/java_api/java/awt/Insets.h>
#include <scapix/java_api/javax/swing/plaf/nimbus/ImageScalingHelper_PaintType.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::nimbus::ImageScalingHelper : public jni::object_base<"javax/swing/plaf/nimbus/ImageScalingHelper",
	java::lang::Object>
{
public:

	static void paint(jni::ref<java::awt::Graphics> p1, jint p2, jint p3, jint p4, jint p5, jni::ref<java::awt::Image> p6, jni::ref<java::awt::Insets> p7, jni::ref<java::awt::Insets> p8, jni::ref<javax::swing::plaf::nimbus::ImageScalingHelper_PaintType> p9, jint p10) { return call_static_method<"paint", void>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }

protected:

	ImageScalingHelper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_IMAGESCALINGHELPER