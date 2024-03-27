// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_RENDERINGHINTS_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_RENDERINGHINTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class RenderingHints; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::RenderingHints>
{
	static constexpr fixed_string class_name = "java/awt/RenderingHints";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Map, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_RENDERINGHINTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_RENDERINGHINTS)
#define SCAPIX_JAVA_API_JAVA_AWT_RENDERINGHINTS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/RenderingHints_Key.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::RenderingHints : public jni::object_base<"java/awt/RenderingHints",
	java::lang::Object,
	java::util::Map,
	java::lang::Cloneable>
{
public:

	using Key = RenderingHints_Key;

	static jni::ref<java::awt::RenderingHints_Key> KEY_ANTIALIASING() { return get_static_field<"KEY_ANTIALIASING", jni::ref<java::awt::RenderingHints_Key>>(); }
	static jni::ref<java::lang::Object> VALUE_ANTIALIAS_ON() { return get_static_field<"VALUE_ANTIALIAS_ON", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::lang::Object> VALUE_ANTIALIAS_OFF() { return get_static_field<"VALUE_ANTIALIAS_OFF", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::lang::Object> VALUE_ANTIALIAS_DEFAULT() { return get_static_field<"VALUE_ANTIALIAS_DEFAULT", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::awt::RenderingHints_Key> KEY_RENDERING() { return get_static_field<"KEY_RENDERING", jni::ref<java::awt::RenderingHints_Key>>(); }
	static jni::ref<java::lang::Object> VALUE_RENDER_SPEED() { return get_static_field<"VALUE_RENDER_SPEED", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::lang::Object> VALUE_RENDER_QUALITY() { return get_static_field<"VALUE_RENDER_QUALITY", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::lang::Object> VALUE_RENDER_DEFAULT() { return get_static_field<"VALUE_RENDER_DEFAULT", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::awt::RenderingHints_Key> KEY_DITHERING() { return get_static_field<"KEY_DITHERING", jni::ref<java::awt::RenderingHints_Key>>(); }
	static jni::ref<java::lang::Object> VALUE_DITHER_DISABLE() { return get_static_field<"VALUE_DITHER_DISABLE", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::lang::Object> VALUE_DITHER_ENABLE() { return get_static_field<"VALUE_DITHER_ENABLE", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::lang::Object> VALUE_DITHER_DEFAULT() { return get_static_field<"VALUE_DITHER_DEFAULT", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::awt::RenderingHints_Key> KEY_TEXT_ANTIALIASING() { return get_static_field<"KEY_TEXT_ANTIALIASING", jni::ref<java::awt::RenderingHints_Key>>(); }
	static jni::ref<java::lang::Object> VALUE_TEXT_ANTIALIAS_ON() { return get_static_field<"VALUE_TEXT_ANTIALIAS_ON", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::lang::Object> VALUE_TEXT_ANTIALIAS_OFF() { return get_static_field<"VALUE_TEXT_ANTIALIAS_OFF", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::lang::Object> VALUE_TEXT_ANTIALIAS_DEFAULT() { return get_static_field<"VALUE_TEXT_ANTIALIAS_DEFAULT", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::lang::Object> VALUE_TEXT_ANTIALIAS_GASP() { return get_static_field<"VALUE_TEXT_ANTIALIAS_GASP", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::lang::Object> VALUE_TEXT_ANTIALIAS_LCD_HRGB() { return get_static_field<"VALUE_TEXT_ANTIALIAS_LCD_HRGB", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::lang::Object> VALUE_TEXT_ANTIALIAS_LCD_HBGR() { return get_static_field<"VALUE_TEXT_ANTIALIAS_LCD_HBGR", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::lang::Object> VALUE_TEXT_ANTIALIAS_LCD_VRGB() { return get_static_field<"VALUE_TEXT_ANTIALIAS_LCD_VRGB", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::lang::Object> VALUE_TEXT_ANTIALIAS_LCD_VBGR() { return get_static_field<"VALUE_TEXT_ANTIALIAS_LCD_VBGR", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::awt::RenderingHints_Key> KEY_TEXT_LCD_CONTRAST() { return get_static_field<"KEY_TEXT_LCD_CONTRAST", jni::ref<java::awt::RenderingHints_Key>>(); }
	static jni::ref<java::awt::RenderingHints_Key> KEY_FRACTIONALMETRICS() { return get_static_field<"KEY_FRACTIONALMETRICS", jni::ref<java::awt::RenderingHints_Key>>(); }
	static jni::ref<java::lang::Object> VALUE_FRACTIONALMETRICS_OFF() { return get_static_field<"VALUE_FRACTIONALMETRICS_OFF", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::lang::Object> VALUE_FRACTIONALMETRICS_ON() { return get_static_field<"VALUE_FRACTIONALMETRICS_ON", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::lang::Object> VALUE_FRACTIONALMETRICS_DEFAULT() { return get_static_field<"VALUE_FRACTIONALMETRICS_DEFAULT", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::awt::RenderingHints_Key> KEY_INTERPOLATION() { return get_static_field<"KEY_INTERPOLATION", jni::ref<java::awt::RenderingHints_Key>>(); }
	static jni::ref<java::lang::Object> VALUE_INTERPOLATION_NEAREST_NEIGHBOR() { return get_static_field<"VALUE_INTERPOLATION_NEAREST_NEIGHBOR", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::lang::Object> VALUE_INTERPOLATION_BILINEAR() { return get_static_field<"VALUE_INTERPOLATION_BILINEAR", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::lang::Object> VALUE_INTERPOLATION_BICUBIC() { return get_static_field<"VALUE_INTERPOLATION_BICUBIC", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::awt::RenderingHints_Key> KEY_ALPHA_INTERPOLATION() { return get_static_field<"KEY_ALPHA_INTERPOLATION", jni::ref<java::awt::RenderingHints_Key>>(); }
	static jni::ref<java::lang::Object> VALUE_ALPHA_INTERPOLATION_SPEED() { return get_static_field<"VALUE_ALPHA_INTERPOLATION_SPEED", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::lang::Object> VALUE_ALPHA_INTERPOLATION_QUALITY() { return get_static_field<"VALUE_ALPHA_INTERPOLATION_QUALITY", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::lang::Object> VALUE_ALPHA_INTERPOLATION_DEFAULT() { return get_static_field<"VALUE_ALPHA_INTERPOLATION_DEFAULT", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::awt::RenderingHints_Key> KEY_COLOR_RENDERING() { return get_static_field<"KEY_COLOR_RENDERING", jni::ref<java::awt::RenderingHints_Key>>(); }
	static jni::ref<java::lang::Object> VALUE_COLOR_RENDER_SPEED() { return get_static_field<"VALUE_COLOR_RENDER_SPEED", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::lang::Object> VALUE_COLOR_RENDER_QUALITY() { return get_static_field<"VALUE_COLOR_RENDER_QUALITY", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::lang::Object> VALUE_COLOR_RENDER_DEFAULT() { return get_static_field<"VALUE_COLOR_RENDER_DEFAULT", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::awt::RenderingHints_Key> KEY_STROKE_CONTROL() { return get_static_field<"KEY_STROKE_CONTROL", jni::ref<java::awt::RenderingHints_Key>>(); }
	static jni::ref<java::lang::Object> VALUE_STROKE_DEFAULT() { return get_static_field<"VALUE_STROKE_DEFAULT", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::lang::Object> VALUE_STROKE_NORMALIZE() { return get_static_field<"VALUE_STROKE_NORMALIZE", jni::ref<java::lang::Object>>(); }
	static jni::ref<java::lang::Object> VALUE_STROKE_PURE() { return get_static_field<"VALUE_STROKE_PURE", jni::ref<java::lang::Object>>(); }

	static jni::ref<java::awt::RenderingHints> new_object(jni::ref<java::util::Map> p1) { return base_::new_object(p1); }
	static jni::ref<java::awt::RenderingHints> new_object(jni::ref<java::awt::RenderingHints_Key> p1, jni::ref<java::lang::Object> p2) { return base_::new_object(p1, p2); }
	jint size() { return call_method<"size", jint>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jboolean containsKey(jni::ref<java::lang::Object> p1) { return call_method<"containsKey", jboolean>(p1); }
	jboolean containsValue(jni::ref<java::lang::Object> p1) { return call_method<"containsValue", jboolean>(p1); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::Object> p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> put(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"put", jni::ref<java::lang::Object>>(p1, p2); }
	void add(jni::ref<java::awt::RenderingHints> p1) { return call_method<"add", void>(p1); }
	void clear() { return call_method<"clear", void>(); }
	jni::ref<java::lang::Object> remove(jni::ref<java::lang::Object> p1) { return call_method<"remove", jni::ref<java::lang::Object>>(p1); }
	void putAll(jni::ref<java::util::Map> p1) { return call_method<"putAll", void>(p1); }
	jni::ref<java::util::Set> keySet() { return call_method<"keySet", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Collection> values() { return call_method<"values", jni::ref<java::util::Collection>>(); }
	jni::ref<java::util::Set> entrySet() { return call_method<"entrySet", jni::ref<java::util::Set>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	RenderingHints(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_RENDERINGHINTS