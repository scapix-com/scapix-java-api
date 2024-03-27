// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_COLORSPACE_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_COLORSPACE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class ColorSpace; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::ColorSpace>
{
	static constexpr fixed_string class_name = "android/graphics/ColorSpace";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_COLORSPACE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_COLORSPACE)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_COLORSPACE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/ColorSpace_Adaptation.h>
#include <scapix/java_api/android/graphics/ColorSpace_Connector.h>
#include <scapix/java_api/android/graphics/ColorSpace_Model.h>
#include <scapix/java_api/android/graphics/ColorSpace_Named.h>
#include <scapix/java_api/android/graphics/ColorSpace_RenderIntent.h>
#include <scapix/java_api/android/graphics/ColorSpace_Rgb_TransferParameters.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/graphics/ColorSpace_Rgb.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::ColorSpace : public jni::object_base<"android/graphics/ColorSpace",
	java::lang::Object>
{
public:

	using Rgb = ColorSpace_Rgb;
	using RenderIntent = ColorSpace_RenderIntent;
	using Named = ColorSpace_Named;
	using Model = ColorSpace_Model;
	using Connector = ColorSpace_Connector;
	using Adaptation = ColorSpace_Adaptation;

	static jni::ref<jni::array<jfloat>> ILLUMINANT_A() { return get_static_field<"ILLUMINANT_A", jni::ref<jni::array<jfloat>>>(); }
	static jni::ref<jni::array<jfloat>> ILLUMINANT_B() { return get_static_field<"ILLUMINANT_B", jni::ref<jni::array<jfloat>>>(); }
	static jni::ref<jni::array<jfloat>> ILLUMINANT_C() { return get_static_field<"ILLUMINANT_C", jni::ref<jni::array<jfloat>>>(); }
	static jni::ref<jni::array<jfloat>> ILLUMINANT_D50() { return get_static_field<"ILLUMINANT_D50", jni::ref<jni::array<jfloat>>>(); }
	static jni::ref<jni::array<jfloat>> ILLUMINANT_D55() { return get_static_field<"ILLUMINANT_D55", jni::ref<jni::array<jfloat>>>(); }
	static jni::ref<jni::array<jfloat>> ILLUMINANT_D60() { return get_static_field<"ILLUMINANT_D60", jni::ref<jni::array<jfloat>>>(); }
	static jni::ref<jni::array<jfloat>> ILLUMINANT_D65() { return get_static_field<"ILLUMINANT_D65", jni::ref<jni::array<jfloat>>>(); }
	static jni::ref<jni::array<jfloat>> ILLUMINANT_D75() { return get_static_field<"ILLUMINANT_D75", jni::ref<jni::array<jfloat>>>(); }
	static jni::ref<jni::array<jfloat>> ILLUMINANT_E() { return get_static_field<"ILLUMINANT_E", jni::ref<jni::array<jfloat>>>(); }
	static jint MAX_ID() { return get_static_field<"MAX_ID", jint>(); }
	static jint MIN_ID() { return get_static_field<"MIN_ID", jint>(); }

	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jint getId() { return call_method<"getId", jint>(); }
	jni::ref<android::graphics::ColorSpace_Model> getModel() { return call_method<"getModel", jni::ref<android::graphics::ColorSpace_Model>>(); }
	jint getComponentCount() { return call_method<"getComponentCount", jint>(); }
	jboolean isWideGamut() { return call_method<"isWideGamut", jboolean>(); }
	jboolean isSrgb() { return call_method<"isSrgb", jboolean>(); }
	jfloat getMinValue(jint p1) { return call_method<"getMinValue", jfloat>(p1); }
	jfloat getMaxValue(jint p1) { return call_method<"getMaxValue", jfloat>(p1); }
	jni::ref<jni::array<jfloat>> toXyz(jfloat r, jfloat g, jfloat b) { return call_method<"toXyz", jni::ref<jni::array<jfloat>>>(r, g, b); }
	jni::ref<jni::array<jfloat>> toXyz(jni::ref<jni::array<jfloat>> p1) { return call_method<"toXyz", jni::ref<jni::array<jfloat>>>(p1); }
	jni::ref<jni::array<jfloat>> fromXyz(jfloat x, jfloat y, jfloat z) { return call_method<"fromXyz", jni::ref<jni::array<jfloat>>>(x, y, z); }
	jni::ref<jni::array<jfloat>> fromXyz(jni::ref<jni::array<jfloat>> p1) { return call_method<"fromXyz", jni::ref<jni::array<jfloat>>>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	static jni::ref<android::graphics::ColorSpace_Connector> connect(jni::ref<android::graphics::ColorSpace> source, jni::ref<android::graphics::ColorSpace> destination) { return call_static_method<"connect", jni::ref<android::graphics::ColorSpace_Connector>>(source, destination); }
	static jni::ref<android::graphics::ColorSpace_Connector> connect(jni::ref<android::graphics::ColorSpace> source, jni::ref<android::graphics::ColorSpace> destination, jni::ref<android::graphics::ColorSpace_RenderIntent> intent) { return call_static_method<"connect", jni::ref<android::graphics::ColorSpace_Connector>>(source, destination, intent); }
	static jni::ref<android::graphics::ColorSpace_Connector> connect(jni::ref<android::graphics::ColorSpace> source) { return call_static_method<"connect", jni::ref<android::graphics::ColorSpace_Connector>>(source); }
	static jni::ref<android::graphics::ColorSpace_Connector> connect(jni::ref<android::graphics::ColorSpace> source, jni::ref<android::graphics::ColorSpace_RenderIntent> intent) { return call_static_method<"connect", jni::ref<android::graphics::ColorSpace_Connector>>(source, intent); }
	static jni::ref<android::graphics::ColorSpace> adapt(jni::ref<android::graphics::ColorSpace> colorSpace, jni::ref<jni::array<jfloat>> whitePoint) { return call_static_method<"adapt", jni::ref<android::graphics::ColorSpace>>(colorSpace, whitePoint); }
	static jni::ref<android::graphics::ColorSpace> adapt(jni::ref<android::graphics::ColorSpace> colorSpace, jni::ref<jni::array<jfloat>> whitePoint, jni::ref<android::graphics::ColorSpace_Adaptation> adaptation) { return call_static_method<"adapt", jni::ref<android::graphics::ColorSpace>>(colorSpace, whitePoint, adaptation); }
	static jni::ref<android::graphics::ColorSpace> get(jni::ref<android::graphics::ColorSpace_Named> name) { return call_static_method<"get", jni::ref<android::graphics::ColorSpace>>(name); }
	static jni::ref<android::graphics::ColorSpace> match(jni::ref<jni::array<jfloat>> toXYZD50, jni::ref<android::graphics::ColorSpace_Rgb_TransferParameters> function) { return call_static_method<"match", jni::ref<android::graphics::ColorSpace>>(toXYZD50, function); }
	static jni::ref<jni::array<jfloat>> cctToXyz(jint cct) { return call_static_method<"cctToXyz", jni::ref<jni::array<jfloat>>>(cct); }
	static jni::ref<jni::array<jfloat>> chromaticAdaptation(jni::ref<android::graphics::ColorSpace_Adaptation> adaptation, jni::ref<jni::array<jfloat>> srcWhitePoint, jni::ref<jni::array<jfloat>> dstWhitePoint) { return call_static_method<"chromaticAdaptation", jni::ref<jni::array<jfloat>>>(adaptation, srcWhitePoint, dstWhitePoint); }

protected:

	ColorSpace(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_COLORSPACE