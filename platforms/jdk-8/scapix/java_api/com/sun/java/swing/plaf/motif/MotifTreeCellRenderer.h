// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/tree/DefaultTreeCellRenderer.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFTREECELLRENDERER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFTREECELLRENDERER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::motif { class MotifTreeCellRenderer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::motif::MotifTreeCellRenderer>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/motif/MotifTreeCellRenderer";
	using base_classes = std::tuple<scapix::java_api::javax::swing::tree::DefaultTreeCellRenderer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFTREECELLRENDERER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFTREECELLRENDERER)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFTREECELLRENDERER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/Icon.h>
#include <scapix/java_api/com/sun/java/swing/plaf/motif/MotifTreeCellRenderer_TreeLeafIcon.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::swing::plaf::motif::MotifTreeCellRenderer : public jni::object_base<"com/sun/java/swing/plaf/motif/MotifTreeCellRenderer",
	javax::swing::tree::DefaultTreeCellRenderer>
{
public:

	using TreeLeafIcon = MotifTreeCellRenderer_TreeLeafIcon;

	static jni::ref<com::sun::java::swing::plaf::motif::MotifTreeCellRenderer> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::Icon> loadLeafIcon() { return call_static_method<"loadLeafIcon", jni::ref<javax::swing::Icon>>(); }

protected:

	MotifTreeCellRenderer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFTREECELLRENDERER
