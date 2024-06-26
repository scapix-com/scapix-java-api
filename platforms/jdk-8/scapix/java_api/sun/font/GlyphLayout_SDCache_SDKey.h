// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_FONT_GLYPHLAYOUT_SDCACHE_SDKEY_FWD
#define SCAPIX_JAVA_API_SUN_FONT_GLYPHLAYOUT_SDCACHE_SDKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::font { class GlyphLayout_SDCache_SDKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::font::GlyphLayout_SDCache_SDKey>
{
	static constexpr fixed_string class_name = "sun/font/GlyphLayout$SDCache$SDKey";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_GLYPHLAYOUT_SDCACHE_SDKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_FONT_GLYPHLAYOUT_SDCACHE_SDKEY)
#define SCAPIX_JAVA_API_SUN_FONT_GLYPHLAYOUT_SDCACHE_SDKEY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::font::GlyphLayout_SDCache_SDKey : public jni::object_base<"sun/font/GlyphLayout$SDCache$SDKey",
	java::lang::Object>
{
public:

	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }

protected:

	GlyphLayout_SDCache_SDKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_GLYPHLAYOUT_SDCACHE_SDKEY
