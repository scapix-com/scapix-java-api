// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/ListResourceBundle.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_SWING_INTERNAL_PLAF_METAL_RESOURCES_METAL_SV_FWD
#define SCAPIX_JAVA_API_COM_SUN_SWING_INTERNAL_PLAF_METAL_RESOURCES_METAL_SV_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::swing::internal::plaf::metal::resources { class metal_sv; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::swing::internal::plaf::metal::resources::metal_sv>
{
	static constexpr fixed_string class_name = "com/sun/swing/internal/plaf/metal/resources/metal_sv";
	using base_classes = std::tuple<scapix::java_api::java::util::ListResourceBundle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_SWING_INTERNAL_PLAF_METAL_RESOURCES_METAL_SV_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_SWING_INTERNAL_PLAF_METAL_RESOURCES_METAL_SV)
#define SCAPIX_JAVA_API_COM_SUN_SWING_INTERNAL_PLAF_METAL_RESOURCES_METAL_SV

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::swing::internal::plaf::metal::resources::metal_sv : public jni::object_base<"com/sun/swing/internal/plaf/metal/resources/metal_sv",
	java::util::ListResourceBundle>
{
public:

	static jni::ref<com::sun::swing::internal::plaf::metal::resources::metal_sv> new_object() { return base_::new_object(); }

protected:

	metal_sv(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_SWING_INTERNAL_PLAF_METAL_RESOURCES_METAL_SV
