// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/font/FontStrike.h>

#ifndef SCAPIX_JAVA_API_SUN_FONT_PHYSICALSTRIKE_FWD
#define SCAPIX_JAVA_API_SUN_FONT_PHYSICALSTRIKE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::font { class PhysicalStrike; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::font::PhysicalStrike>
{
	static constexpr fixed_string class_name = "sun/font/PhysicalStrike";
	using base_classes = std::tuple<scapix::java_api::sun::font::FontStrike>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_PHYSICALSTRIKE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_FONT_PHYSICALSTRIKE)
#define SCAPIX_JAVA_API_SUN_FONT_PHYSICALSTRIKE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::font::PhysicalStrike : public jni::object_base<"sun/font/PhysicalStrike",
	sun::font::FontStrike>
{
public:

	jint getNumGlyphs() { return call_method<"getNumGlyphs", jint>(); }

protected:

	PhysicalStrike(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_PHYSICALSTRIKE
