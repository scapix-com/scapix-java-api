// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/FilenameFilter.h>

#ifndef SCAPIX_JAVA_API_SUN_FONT_SUNFONTMANAGER_TTFILTER_FWD
#define SCAPIX_JAVA_API_SUN_FONT_SUNFONTMANAGER_TTFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::font { class SunFontManager_TTFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::font::SunFontManager_TTFilter>
{
	static constexpr fixed_string class_name = "sun/font/SunFontManager$TTFilter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::FilenameFilter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_SUNFONTMANAGER_TTFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_FONT_SUNFONTMANAGER_TTFILTER)
#define SCAPIX_JAVA_API_SUN_FONT_SUNFONTMANAGER_TTFILTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::font::SunFontManager_TTFilter : public jni::object_base<"sun/font/SunFontManager$TTFilter",
	java::lang::Object,
	java::io::FilenameFilter>
{
public:

	jboolean accept(jni::ref<java::io::File> p1, jni::ref<java::lang::String> p2) { return call_method<"accept", jboolean>(p1, p2); }

protected:

	SunFontManager_TTFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_SUNFONTMANAGER_TTFILTER
