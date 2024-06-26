// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/font/FontScaler.h>

#ifndef SCAPIX_JAVA_API_SUN_FONT_NULLFONTSCALER_FWD
#define SCAPIX_JAVA_API_SUN_FONT_NULLFONTSCALER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::font { class NullFontScaler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::font::NullFontScaler>
{
	static constexpr fixed_string class_name = "sun/font/NullFontScaler";
	using base_classes = std::tuple<scapix::java_api::sun::font::FontScaler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_NULLFONTSCALER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_FONT_NULLFONTSCALER)
#define SCAPIX_JAVA_API_SUN_FONT_NULLFONTSCALER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/font/Font2D.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::font::NullFontScaler : public jni::object_base<"sun/font/NullFontScaler",
	sun::font::FontScaler>
{
public:

	static jni::ref<sun::font::NullFontScaler> new_object(jni::ref<sun::font::Font2D> p1, jint p2, jboolean p3, jint p4) { return base_::new_object(p1, p2, p3, p4); }

protected:

	NullFontScaler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_NULLFONTSCALER
