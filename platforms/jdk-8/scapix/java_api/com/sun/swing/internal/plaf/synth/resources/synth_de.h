// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/ListResourceBundle.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_SWING_INTERNAL_PLAF_SYNTH_RESOURCES_SYNTH_DE_FWD
#define SCAPIX_JAVA_API_COM_SUN_SWING_INTERNAL_PLAF_SYNTH_RESOURCES_SYNTH_DE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::swing::internal::plaf::synth::resources { class synth_de; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::swing::internal::plaf::synth::resources::synth_de>
{
	static constexpr fixed_string class_name = "com/sun/swing/internal/plaf/synth/resources/synth_de";
	using base_classes = std::tuple<scapix::java_api::java::util::ListResourceBundle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_SWING_INTERNAL_PLAF_SYNTH_RESOURCES_SYNTH_DE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_SWING_INTERNAL_PLAF_SYNTH_RESOURCES_SYNTH_DE)
#define SCAPIX_JAVA_API_COM_SUN_SWING_INTERNAL_PLAF_SYNTH_RESOURCES_SYNTH_DE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::swing::internal::plaf::synth::resources::synth_de : public jni::object_base<"com/sun/swing/internal/plaf/synth/resources/synth_de",
	java::util::ListResourceBundle>
{
public:

	static jni::ref<com::sun::swing::internal::plaf::synth::resources::synth_de> new_object() { return base_::new_object(); }

protected:

	synth_de(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_SWING_INTERNAL_PLAF_SYNTH_RESOURCES_SYNTH_DE
