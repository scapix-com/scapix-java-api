// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/border/BevelBorder.h>
#include <scapix/java_api/javax/swing/plaf/UIResource.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BORDERUIRESOURCE_BEVELBORDERUIRESOURCE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BORDERUIRESOURCE_BEVELBORDERUIRESOURCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf { class BorderUIResource_BevelBorderUIResource; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::BorderUIResource_BevelBorderUIResource>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/BorderUIResource$BevelBorderUIResource";
	using base_classes = std::tuple<scapix::java_api::javax::swing::border::BevelBorder, scapix::java_api::javax::swing::plaf::UIResource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BORDERUIRESOURCE_BEVELBORDERUIRESOURCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BORDERUIRESOURCE_BEVELBORDERUIRESOURCE)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BORDERUIRESOURCE_BEVELBORDERUIRESOURCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Color.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::BorderUIResource_BevelBorderUIResource : public jni::object_base<"javax/swing/plaf/BorderUIResource$BevelBorderUIResource",
	javax::swing::border::BevelBorder,
	javax::swing::plaf::UIResource>
{
public:

	static jni::ref<javax::swing::plaf::BorderUIResource_BevelBorderUIResource> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::plaf::BorderUIResource_BevelBorderUIResource> new_object(jint p1, jni::ref<java::awt::Color> p2, jni::ref<java::awt::Color> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<javax::swing::plaf::BorderUIResource_BevelBorderUIResource> new_object(jint p1, jni::ref<java::awt::Color> p2, jni::ref<java::awt::Color> p3, jni::ref<java::awt::Color> p4, jni::ref<java::awt::Color> p5) { return base_::new_object(p1, p2, p3, p4, p5); }

protected:

	BorderUIResource_BevelBorderUIResource(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BORDERUIRESOURCE_BEVELBORDERUIRESOURCE