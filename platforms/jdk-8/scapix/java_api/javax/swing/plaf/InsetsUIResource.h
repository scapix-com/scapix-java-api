// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/Insets.h>
#include <scapix/java_api/javax/swing/plaf/UIResource.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_INSETSUIRESOURCE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_INSETSUIRESOURCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf { class InsetsUIResource; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::InsetsUIResource>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/InsetsUIResource";
	using base_classes = std::tuple<scapix::java_api::java::awt::Insets, scapix::java_api::javax::swing::plaf::UIResource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_INSETSUIRESOURCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_INSETSUIRESOURCE)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_INSETSUIRESOURCE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::InsetsUIResource : public jni::object_base<"javax/swing/plaf/InsetsUIResource",
	java::awt::Insets,
	javax::swing::plaf::UIResource>
{
public:

	static jni::ref<javax::swing::plaf::InsetsUIResource> new_object(jint p1, jint p2, jint p3, jint p4) { return base_::new_object(p1, p2, p3, p4); }

protected:

	InsetsUIResource(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_INSETSUIRESOURCE
