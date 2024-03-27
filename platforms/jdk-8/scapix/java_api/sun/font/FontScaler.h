// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/java2d/DisposerRecord.h>

#ifndef SCAPIX_JAVA_API_SUN_FONT_FONTSCALER_FWD
#define SCAPIX_JAVA_API_SUN_FONT_FONTSCALER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::font { class FontScaler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::font::FontScaler>
{
	static constexpr fixed_string class_name = "sun/font/FontScaler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::java2d::DisposerRecord>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_FONTSCALER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_FONT_FONTSCALER)
#define SCAPIX_JAVA_API_SUN_FONT_FONTSCALER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/font/Font2D.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::font::FontScaler : public jni::object_base<"sun/font/FontScaler",
	java::lang::Object,
	sun::java2d::DisposerRecord>
{
public:

	static jni::ref<sun::font::FontScaler> new_object() { return base_::new_object(); }
	static jni::ref<sun::font::FontScaler> getScaler(jni::ref<sun::font::Font2D> p1, jint p2, jboolean p3, jint p4) { return call_static_method<"getScaler", jni::ref<sun::font::FontScaler>>(p1, p2, p3, p4); }
	static jni::ref<sun::font::FontScaler> getNullScaler() { return call_static_method<"getNullScaler", jni::ref<sun::font::FontScaler>>(); }
	void dispose() { return call_method<"dispose", void>(); }

protected:

	FontScaler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_FONTSCALER