// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_FONT_SUNFONTMANAGER_FONTREGISTRATIONINFO_FWD
#define SCAPIX_JAVA_API_SUN_FONT_SUNFONTMANAGER_FONTREGISTRATIONINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::font { class SunFontManager_FontRegistrationInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::font::SunFontManager_FontRegistrationInfo>
{
	static constexpr fixed_string class_name = "sun/font/SunFontManager$FontRegistrationInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_SUNFONTMANAGER_FONTREGISTRATIONINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_FONT_SUNFONTMANAGER_FONTREGISTRATIONINFO)
#define SCAPIX_JAVA_API_SUN_FONT_SUNFONTMANAGER_FONTREGISTRATIONINFO

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::font::SunFontManager_FontRegistrationInfo : public jni::object_base<"sun/font/SunFontManager$FontRegistrationInfo",
	java::lang::Object>
{
public:


protected:

	SunFontManager_FontRegistrationInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_SUNFONTMANAGER_FONTREGISTRATIONINFO
