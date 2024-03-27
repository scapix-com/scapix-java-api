// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_FONT_FONTFAMILY_FWD
#define SCAPIX_JAVA_API_SUN_FONT_FONTFAMILY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::font { class FontFamily; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::font::FontFamily>
{
	static constexpr fixed_string class_name = "sun/font/FontFamily";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_FONTFAMILY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_FONT_FONTFAMILY)
#define SCAPIX_JAVA_API_SUN_FONT_FONTFAMILY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/font/Font2D.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::font::FontFamily : public jni::object_base<"sun/font/FontFamily",
	java::lang::Object>
{
public:

	static jni::ref<sun::font::FontFamily> getFamily(jni::ref<java::lang::String> p1) { return call_static_method<"getFamily", jni::ref<sun::font::FontFamily>>(p1); }
	static jni::ref<jni::array<java::lang::String>> getAllFamilyNames() { return call_static_method<"getAllFamilyNames", jni::ref<jni::array<java::lang::String>>>(); }
	static jni::ref<sun::font::FontFamily> new_object(jni::ref<java::lang::String> p1, jboolean p2, jint p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<java::lang::String> getFamilyName() { return call_method<"getFamilyName", jni::ref<java::lang::String>>(); }
	jint getRank() { return call_method<"getRank", jint>(); }
	void setFont(jni::ref<sun::font::Font2D> p1, jint p2) { return call_method<"setFont", void>(p1, p2); }
	jni::ref<sun::font::Font2D> getFontWithExactStyleMatch(jint p1) { return call_method<"getFontWithExactStyleMatch", jni::ref<sun::font::Font2D>>(p1); }
	jni::ref<sun::font::Font2D> getFont(jint p1) { return call_method<"getFont", jni::ref<sun::font::Font2D>>(p1); }
	static jni::ref<sun::font::FontFamily> getLocaleFamily(jni::ref<java::lang::String> p1) { return call_static_method<"getLocaleFamily", jni::ref<sun::font::FontFamily>>(p1); }
	static jni::ref<jni::array<sun::font::FontFamily>> getAllFontFamilies() { return call_static_method<"getAllFontFamilies", jni::ref<jni::array<sun::font::FontFamily>>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	FontFamily(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_FONTFAMILY