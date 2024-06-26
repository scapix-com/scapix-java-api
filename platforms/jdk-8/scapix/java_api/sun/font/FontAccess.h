// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_FONT_FONTACCESS_FWD
#define SCAPIX_JAVA_API_SUN_FONT_FONTACCESS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::font { class FontAccess; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::font::FontAccess>
{
	static constexpr fixed_string class_name = "sun/font/FontAccess";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_FONTACCESS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_FONT_FONTACCESS)
#define SCAPIX_JAVA_API_SUN_FONT_FONTACCESS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Font.h>
#include <scapix/java_api/sun/font/Font2D.h>
#include <scapix/java_api/sun/font/Font2DHandle.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::font::FontAccess : public jni::object_base<"sun/font/FontAccess",
	java::lang::Object>
{
public:

	static jni::ref<sun::font::FontAccess> new_object() { return base_::new_object(); }
	static void setFontAccess(jni::ref<sun::font::FontAccess> p1) { return call_static_method<"setFontAccess", void>(p1); }
	static jni::ref<sun::font::FontAccess> getFontAccess() { return call_static_method<"getFontAccess", jni::ref<sun::font::FontAccess>>(); }
	jni::ref<sun::font::Font2D> getFont2D(jni::ref<java::awt::Font> p1) { return call_method<"getFont2D", jni::ref<sun::font::Font2D>>(p1); }
	void setFont2D(jni::ref<java::awt::Font> p1, jni::ref<sun::font::Font2DHandle> p2) { return call_method<"setFont2D", void>(p1, p2); }
	void setCreatedFont(jni::ref<java::awt::Font> p1) { return call_method<"setCreatedFont", void>(p1); }
	jboolean isCreatedFont(jni::ref<java::awt::Font> p1) { return call_method<"isCreatedFont", jboolean>(p1); }

protected:

	FontAccess(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_FONTACCESS
