// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_FONT_TRUETYPEFONT_DIRECTORYENTRY_FWD
#define SCAPIX_JAVA_API_SUN_FONT_TRUETYPEFONT_DIRECTORYENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::font { class TrueTypeFont_DirectoryEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::font::TrueTypeFont_DirectoryEntry>
{
	static constexpr fixed_string class_name = "sun/font/TrueTypeFont$DirectoryEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_TRUETYPEFONT_DIRECTORYENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_FONT_TRUETYPEFONT_DIRECTORYENTRY)
#define SCAPIX_JAVA_API_SUN_FONT_TRUETYPEFONT_DIRECTORYENTRY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::font::TrueTypeFont_DirectoryEntry : public jni::object_base<"sun/font/TrueTypeFont$DirectoryEntry",
	java::lang::Object>
{
public:


protected:

	TrueTypeFont_DirectoryEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_TRUETYPEFONT_DIRECTORYENTRY
