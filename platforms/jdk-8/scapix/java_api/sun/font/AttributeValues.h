// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_SUN_FONT_ATTRIBUTEVALUES_FWD
#define SCAPIX_JAVA_API_SUN_FONT_ATTRIBUTEVALUES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::font { class AttributeValues; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::font::AttributeValues>
{
	static constexpr fixed_string class_name = "sun/font/AttributeValues";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_ATTRIBUTEVALUES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_FONT_ATTRIBUTEVALUES)
#define SCAPIX_JAVA_API_SUN_FONT_ATTRIBUTEVALUES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Font.h>
#include <scapix/java_api/java/awt/Paint.h>
#include <scapix/java_api/java/awt/font/GraphicAttribute.h>
#include <scapix/java_api/java/awt/font/NumericShaper.h>
#include <scapix/java_api/java/awt/font/TransformAttribute.h>
#include <scapix/java_api/java/awt/geom/AffineTransform.h>
#include <scapix/java_api/java/awt/im/InputMethodHighlight.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/text/Annotation.h>
#include <scapix/java_api/java/util/Hashtable.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/sun/font/EAttribute.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::font::AttributeValues : public jni::object_base<"sun/font/AttributeValues",
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	static jint MASK_ALL() { return get_static_field<"MASK_ALL", jint>(); }

	static jni::ref<sun::font::AttributeValues> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> getFamily() { return call_method<"getFamily", jni::ref<java::lang::String>>(); }
	void setFamily(jni::ref<java::lang::String> p1) { return call_method<"setFamily", void>(p1); }
	jfloat getWeight() { return call_method<"getWeight", jfloat>(); }
	void setWeight(jfloat p1) { return call_method<"setWeight", void>(p1); }
	jfloat getWidth() { return call_method<"getWidth", jfloat>(); }
	void setWidth(jfloat p1) { return call_method<"setWidth", void>(p1); }
	jfloat getPosture() { return call_method<"getPosture", jfloat>(); }
	void setPosture(jfloat p1) { return call_method<"setPosture", void>(p1); }
	jfloat getSize() { return call_method<"getSize", jfloat>(); }
	void setSize(jfloat p1) { return call_method<"setSize", void>(p1); }
	jni::ref<java::awt::geom::AffineTransform> getTransform() { return call_method<"getTransform", jni::ref<java::awt::geom::AffineTransform>>(); }
	void setTransform(jni::ref<java::awt::geom::AffineTransform> p1) { return call_method<"setTransform", void>(p1); }
	void setTransform(jni::ref<java::awt::font::TransformAttribute> p1) { return call_method<"setTransform", void>(p1); }
	jint getSuperscript() { return call_method<"getSuperscript", jint>(); }
	void setSuperscript(jint p1) { return call_method<"setSuperscript", void>(p1); }
	jni::ref<java::awt::Font> getFont() { return call_method<"getFont", jni::ref<java::awt::Font>>(); }
	void setFont(jni::ref<java::awt::Font> p1) { return call_method<"setFont", void>(p1); }
	jni::ref<java::awt::font::GraphicAttribute> getCharReplacement() { return call_method<"getCharReplacement", jni::ref<java::awt::font::GraphicAttribute>>(); }
	void setCharReplacement(jni::ref<java::awt::font::GraphicAttribute> p1) { return call_method<"setCharReplacement", void>(p1); }
	jni::ref<java::awt::Paint> getForeground() { return call_method<"getForeground", jni::ref<java::awt::Paint>>(); }
	void setForeground(jni::ref<java::awt::Paint> p1) { return call_method<"setForeground", void>(p1); }
	jni::ref<java::awt::Paint> getBackground() { return call_method<"getBackground", jni::ref<java::awt::Paint>>(); }
	void setBackground(jni::ref<java::awt::Paint> p1) { return call_method<"setBackground", void>(p1); }
	jint getUnderline() { return call_method<"getUnderline", jint>(); }
	void setUnderline(jint p1) { return call_method<"setUnderline", void>(p1); }
	jboolean getStrikethrough() { return call_method<"getStrikethrough", jboolean>(); }
	void setStrikethrough(jboolean p1) { return call_method<"setStrikethrough", void>(p1); }
	jint getRunDirection() { return call_method<"getRunDirection", jint>(); }
	void setRunDirection(jint p1) { return call_method<"setRunDirection", void>(p1); }
	jint getBidiEmbedding() { return call_method<"getBidiEmbedding", jint>(); }
	void setBidiEmbedding(jint p1) { return call_method<"setBidiEmbedding", void>(p1); }
	jfloat getJustification() { return call_method<"getJustification", jfloat>(); }
	void setJustification(jfloat p1) { return call_method<"setJustification", void>(p1); }
	jni::ref<java::lang::Object> getInputMethodHighlight() { return call_method<"getInputMethodHighlight", jni::ref<java::lang::Object>>(); }
	void setInputMethodHighlight(jni::ref<java::text::Annotation> p1) { return call_method<"setInputMethodHighlight", void>(p1); }
	void setInputMethodHighlight(jni::ref<java::awt::im::InputMethodHighlight> p1) { return call_method<"setInputMethodHighlight", void>(p1); }
	jint getInputMethodUnderline() { return call_method<"getInputMethodUnderline", jint>(); }
	void setInputMethodUnderline(jint p1) { return call_method<"setInputMethodUnderline", void>(p1); }
	jboolean getSwapColors() { return call_method<"getSwapColors", jboolean>(); }
	void setSwapColors(jboolean p1) { return call_method<"setSwapColors", void>(p1); }
	jni::ref<java::awt::font::NumericShaper> getNumericShaping() { return call_method<"getNumericShaping", jni::ref<java::awt::font::NumericShaper>>(); }
	void setNumericShaping(jni::ref<java::awt::font::NumericShaper> p1) { return call_method<"setNumericShaping", void>(p1); }
	jint getKerning() { return call_method<"getKerning", jint>(); }
	void setKerning(jint p1) { return call_method<"setKerning", void>(p1); }
	jfloat getTracking() { return call_method<"getTracking", jfloat>(); }
	void setTracking(jfloat p1) { return call_method<"setTracking", void>(p1); }
	jint getLigatures() { return call_method<"getLigatures", jint>(); }
	void setLigatures(jint p1) { return call_method<"setLigatures", void>(p1); }
	jni::ref<java::awt::geom::AffineTransform> getBaselineTransform() { return call_method<"getBaselineTransform", jni::ref<java::awt::geom::AffineTransform>>(); }
	jni::ref<java::awt::geom::AffineTransform> getCharTransform() { return call_method<"getCharTransform", jni::ref<java::awt::geom::AffineTransform>>(); }
	static jint getMask(jni::ref<sun::font::EAttribute> p1) { return call_static_method<"getMask", jint>(p1); }
	static jint getMask(jni::ref<jni::array<sun::font::EAttribute>> p1) { return call_static_method<"getMask", jint>(p1); }
	void unsetDefault() { return call_method<"unsetDefault", void>(); }
	void defineAll(jint p1) { return call_method<"defineAll", void>(p1); }
	jboolean allDefined(jint p1) { return call_method<"allDefined", jboolean>(p1); }
	jboolean anyDefined(jint p1) { return call_method<"anyDefined", jboolean>(p1); }
	jboolean anyNonDefault(jint p1) { return call_method<"anyNonDefault", jboolean>(p1); }
	jboolean isDefined(jni::ref<sun::font::EAttribute> p1) { return call_method<"isDefined", jboolean>(p1); }
	jboolean isNonDefault(jni::ref<sun::font::EAttribute> p1) { return call_method<"isNonDefault", jboolean>(p1); }
	void setDefault(jni::ref<sun::font::EAttribute> p1) { return call_method<"setDefault", void>(p1); }
	void unset(jni::ref<sun::font::EAttribute> p1) { return call_method<"unset", void>(p1); }
	void set(jni::ref<sun::font::EAttribute> p1, jni::ref<sun::font::AttributeValues> p2) { return call_method<"set", void>(p1, p2); }
	void set(jni::ref<sun::font::EAttribute> p1, jni::ref<java::lang::Object> p2) { return call_method<"set", void>(p1, p2); }
	jni::ref<java::lang::Object> get(jni::ref<sun::font::EAttribute> p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	jni::ref<sun::font::AttributeValues> merge(jni::ref<java::util::Map> p1) { return call_method<"merge", jni::ref<sun::font::AttributeValues>>(p1); }
	jni::ref<sun::font::AttributeValues> merge(jni::ref<java::util::Map> p1, jint p2) { return call_method<"merge", jni::ref<sun::font::AttributeValues>>(p1, p2); }
	jni::ref<sun::font::AttributeValues> merge(jni::ref<sun::font::AttributeValues> p1) { return call_method<"merge", jni::ref<sun::font::AttributeValues>>(p1); }
	jni::ref<sun::font::AttributeValues> merge(jni::ref<sun::font::AttributeValues> p1, jint p2) { return call_method<"merge", jni::ref<sun::font::AttributeValues>>(p1, p2); }
	static jni::ref<sun::font::AttributeValues> fromMap(jni::ref<java::util::Map> p1) { return call_static_method<"fromMap", jni::ref<sun::font::AttributeValues>>(p1); }
	static jni::ref<sun::font::AttributeValues> fromMap(jni::ref<java::util::Map> p1, jint p2) { return call_static_method<"fromMap", jni::ref<sun::font::AttributeValues>>(p1, p2); }
	jni::ref<java::util::Map> toMap(jni::ref<java::util::Map> p1) { return call_method<"toMap", jni::ref<java::util::Map>>(p1); }
	static jboolean is16Hashtable(jni::ref<java::util::Hashtable> p1) { return call_static_method<"is16Hashtable", jboolean>(p1); }
	static jni::ref<sun::font::AttributeValues> fromSerializableHashtable(jni::ref<java::util::Hashtable> p1) { return call_static_method<"fromSerializableHashtable", jni::ref<sun::font::AttributeValues>>(p1); }
	jni::ref<java::util::Hashtable> toSerializableHashtable() { return call_method<"toSerializableHashtable", jni::ref<java::util::Hashtable>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jboolean equals(jni::ref<sun::font::AttributeValues> p1) { return call_method<"equals", jboolean>(p1); }
	jni::ref<sun::font::AttributeValues> clone() { return call_method<"clone", jni::ref<sun::font::AttributeValues>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jfloat getJustification(jni::ref<java::util::Map> p1) { return call_static_method<"getJustification", jfloat>(p1); }
	static jni::ref<java::awt::font::NumericShaper> getNumericShaping(jni::ref<java::util::Map> p1) { return call_static_method<"getNumericShaping", jni::ref<java::awt::font::NumericShaper>>(p1); }
	jni::ref<sun::font::AttributeValues> applyIMHighlight() { return call_method<"applyIMHighlight", jni::ref<sun::font::AttributeValues>>(); }
	static jni::ref<java::awt::geom::AffineTransform> getBaselineTransform(jni::ref<java::util::Map> p1) { return call_static_method<"getBaselineTransform", jni::ref<java::awt::geom::AffineTransform>>(p1); }
	static jni::ref<java::awt::geom::AffineTransform> getCharTransform(jni::ref<java::util::Map> p1) { return call_static_method<"getCharTransform", jni::ref<java::awt::geom::AffineTransform>>(p1); }
	void updateDerivedTransforms() { return call_method<"updateDerivedTransforms", void>(); }
	static jni::ref<java::awt::geom::AffineTransform> extractXRotation(jni::ref<java::awt::geom::AffineTransform> p1, jboolean p2) { return call_static_method<"extractXRotation", jni::ref<java::awt::geom::AffineTransform>>(p1, p2); }
	static jni::ref<java::awt::geom::AffineTransform> extractYRotation(jni::ref<java::awt::geom::AffineTransform> p1, jboolean p2) { return call_static_method<"extractYRotation", jni::ref<java::awt::geom::AffineTransform>>(p1, p2); }

protected:

	AttributeValues(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_ATTRIBUTEVALUES
