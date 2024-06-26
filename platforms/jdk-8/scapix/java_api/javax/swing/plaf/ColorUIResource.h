// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/Color.h>
#include <scapix/java_api/javax/swing/plaf/UIResource.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_COLORUIRESOURCE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_COLORUIRESOURCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf { class ColorUIResource; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::ColorUIResource>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/ColorUIResource";
	using base_classes = std::tuple<scapix::java_api::java::awt::Color, scapix::java_api::javax::swing::plaf::UIResource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_COLORUIRESOURCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_COLORUIRESOURCE)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_COLORUIRESOURCE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::ColorUIResource : public jni::object_base<"javax/swing/plaf/ColorUIResource",
	java::awt::Color,
	javax::swing::plaf::UIResource>
{
public:

	static jni::ref<javax::swing::plaf::ColorUIResource> new_object(jint p1, jint p2, jint p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<javax::swing::plaf::ColorUIResource> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::plaf::ColorUIResource> new_object(jfloat p1, jfloat p2, jfloat p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<javax::swing::plaf::ColorUIResource> new_object(jni::ref<java::awt::Color> p1) { return base_::new_object(p1); }

protected:

	ColorUIResource(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_COLORUIRESOURCE
