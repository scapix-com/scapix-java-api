// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/font/CMap.h>

#ifndef SCAPIX_JAVA_API_SUN_FONT_CMAP_CMAPFORMAT0_FWD
#define SCAPIX_JAVA_API_SUN_FONT_CMAP_CMAPFORMAT0_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::font { class CMap_CMapFormat0; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::font::CMap_CMapFormat0>
{
	static constexpr fixed_string class_name = "sun/font/CMap$CMapFormat0";
	using base_classes = std::tuple<scapix::java_api::sun::font::CMap>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_CMAP_CMAPFORMAT0_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_FONT_CMAP_CMAPFORMAT0)
#define SCAPIX_JAVA_API_SUN_FONT_CMAP_CMAPFORMAT0

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::font::CMap_CMapFormat0 : public jni::object_base<"sun/font/CMap$CMapFormat0",
	sun::font::CMap>
{
public:


protected:

	CMap_CMapFormat0(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_CMAP_CMAPFORMAT0
