// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/font/FontStrike.h>

#ifndef SCAPIX_JAVA_API_SUN_FONT_COMPOSITESTRIKE_FWD
#define SCAPIX_JAVA_API_SUN_FONT_COMPOSITESTRIKE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::font { class CompositeStrike; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::font::CompositeStrike>
{
	static constexpr fixed_string class_name = "sun/font/CompositeStrike";
	using base_classes = std::tuple<scapix::java_api::sun::font::FontStrike>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_COMPOSITESTRIKE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_FONT_COMPOSITESTRIKE)
#define SCAPIX_JAVA_API_SUN_FONT_COMPOSITESTRIKE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::font::CompositeStrike : public jni::object_base<"sun/font/CompositeStrike",
	sun::font::FontStrike>
{
public:

	jint getNumGlyphs() { return call_method<"getNumGlyphs", jint>(); }

protected:

	CompositeStrike(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_COMPOSITESTRIKE
