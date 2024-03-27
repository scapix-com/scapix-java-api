// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/color/ColorSpace.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_COLOR_ICC_COLORSPACE_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_COLOR_ICC_COLORSPACE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::color { class ICC_ColorSpace; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::color::ICC_ColorSpace>
{
	static constexpr fixed_string class_name = "java/awt/color/ICC_ColorSpace";
	using base_classes = std::tuple<scapix::java_api::java::awt::color::ColorSpace>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_COLOR_ICC_COLORSPACE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_COLOR_ICC_COLORSPACE)
#define SCAPIX_JAVA_API_JAVA_AWT_COLOR_ICC_COLORSPACE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/color/ICC_Profile.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::color::ICC_ColorSpace : public jni::object_base<"java/awt/color/ICC_ColorSpace",
	java::awt::color::ColorSpace>
{
public:

	static jni::ref<java::awt::color::ICC_ColorSpace> new_object(jni::ref<java::awt::color::ICC_Profile> p1) { return base_::new_object(p1); }
	jni::ref<java::awt::color::ICC_Profile> getProfile() { return call_method<"getProfile", jni::ref<java::awt::color::ICC_Profile>>(); }
	jni::ref<jni::array<jfloat>> toRGB(jni::ref<jni::array<jfloat>> p1) { return call_method<"toRGB", jni::ref<jni::array<jfloat>>>(p1); }
	jni::ref<jni::array<jfloat>> fromRGB(jni::ref<jni::array<jfloat>> p1) { return call_method<"fromRGB", jni::ref<jni::array<jfloat>>>(p1); }
	jni::ref<jni::array<jfloat>> toCIEXYZ(jni::ref<jni::array<jfloat>> p1) { return call_method<"toCIEXYZ", jni::ref<jni::array<jfloat>>>(p1); }
	jni::ref<jni::array<jfloat>> fromCIEXYZ(jni::ref<jni::array<jfloat>> p1) { return call_method<"fromCIEXYZ", jni::ref<jni::array<jfloat>>>(p1); }
	jfloat getMinValue(jint p1) { return call_method<"getMinValue", jfloat>(p1); }
	jfloat getMaxValue(jint p1) { return call_method<"getMaxValue", jfloat>(p1); }

protected:

	ICC_ColorSpace(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_COLOR_ICC_COLORSPACE
