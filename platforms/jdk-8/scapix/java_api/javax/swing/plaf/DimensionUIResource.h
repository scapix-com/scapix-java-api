// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/javax/swing/plaf/UIResource.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_DIMENSIONUIRESOURCE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_DIMENSIONUIRESOURCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf { class DimensionUIResource; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::DimensionUIResource>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/DimensionUIResource";
	using base_classes = std::tuple<scapix::java_api::java::awt::Dimension, scapix::java_api::javax::swing::plaf::UIResource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_DIMENSIONUIRESOURCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_DIMENSIONUIRESOURCE)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_DIMENSIONUIRESOURCE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::DimensionUIResource : public jni::object_base<"javax/swing/plaf/DimensionUIResource",
	java::awt::Dimension,
	javax::swing::plaf::UIResource>
{
public:

	static jni::ref<javax::swing::plaf::DimensionUIResource> new_object(jint p1, jint p2) { return base_::new_object(p1, p2); }

protected:

	DimensionUIResource(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_DIMENSIONUIRESOURCE