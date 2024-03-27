// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/ListResourceBundle.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_RESOURCES_MOTIF_KO_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_RESOURCES_MOTIF_KO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::motif::resources { class motif_ko; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::motif::resources::motif_ko>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/motif/resources/motif_ko";
	using base_classes = std::tuple<scapix::java_api::java::util::ListResourceBundle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_RESOURCES_MOTIF_KO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_RESOURCES_MOTIF_KO)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_RESOURCES_MOTIF_KO

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::swing::plaf::motif::resources::motif_ko : public jni::object_base<"com/sun/java/swing/plaf/motif/resources/motif_ko",
	java::util::ListResourceBundle>
{
public:

	static jni::ref<com::sun::java::swing::plaf::motif::resources::motif_ko> new_object() { return base_::new_object(); }

protected:

	motif_ko(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_RESOURCES_MOTIF_KO
