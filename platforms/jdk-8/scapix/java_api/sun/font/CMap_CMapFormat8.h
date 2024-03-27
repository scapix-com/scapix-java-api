// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/font/CMap.h>

#ifndef SCAPIX_JAVA_API_SUN_FONT_CMAP_CMAPFORMAT8_FWD
#define SCAPIX_JAVA_API_SUN_FONT_CMAP_CMAPFORMAT8_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::font { class CMap_CMapFormat8; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::font::CMap_CMapFormat8>
{
	static constexpr fixed_string class_name = "sun/font/CMap$CMapFormat8";
	using base_classes = std::tuple<scapix::java_api::sun::font::CMap>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_CMAP_CMAPFORMAT8_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_FONT_CMAP_CMAPFORMAT8)
#define SCAPIX_JAVA_API_SUN_FONT_CMAP_CMAPFORMAT8

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::font::CMap_CMapFormat8 : public jni::object_base<"sun/font/CMap$CMapFormat8",
	sun::font::CMap>
{
public:


protected:

	CMap_CMapFormat8(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_CMAP_CMAPFORMAT8