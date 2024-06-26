// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/java2d/DisposerRecord.h>

#ifndef SCAPIX_JAVA_API_SUN_FONT_TRUETYPEFONT_TTDISPOSERRECORD_FWD
#define SCAPIX_JAVA_API_SUN_FONT_TRUETYPEFONT_TTDISPOSERRECORD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::font { class TrueTypeFont_TTDisposerRecord; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::font::TrueTypeFont_TTDisposerRecord>
{
	static constexpr fixed_string class_name = "sun/font/TrueTypeFont$TTDisposerRecord";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::java2d::DisposerRecord>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_TRUETYPEFONT_TTDISPOSERRECORD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_FONT_TRUETYPEFONT_TTDISPOSERRECORD)
#define SCAPIX_JAVA_API_SUN_FONT_TRUETYPEFONT_TTDISPOSERRECORD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::font::TrueTypeFont_TTDisposerRecord : public jni::object_base<"sun/font/TrueTypeFont$TTDisposerRecord",
	java::lang::Object,
	sun::java2d::DisposerRecord>
{
public:

	void dispose() { return call_method<"dispose", void>(); }

protected:

	TrueTypeFont_TTDisposerRecord(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_TRUETYPEFONT_TTDISPOSERRECORD
