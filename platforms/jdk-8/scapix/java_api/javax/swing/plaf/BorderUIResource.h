// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/border/Border.h>
#include <scapix/java_api/javax/swing/plaf/UIResource.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BORDERUIRESOURCE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BORDERUIRESOURCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf { class BorderUIResource; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::BorderUIResource>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/BorderUIResource";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::swing::border::Border, scapix::java_api::javax::swing::plaf::UIResource, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BORDERUIRESOURCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BORDERUIRESOURCE)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BORDERUIRESOURCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/Insets.h>
#include <scapix/java_api/javax/swing/plaf/BorderUIResource_CompoundBorderUIResource.h>
#include <scapix/java_api/javax/swing/plaf/BorderUIResource_EmptyBorderUIResource.h>
#include <scapix/java_api/javax/swing/plaf/BorderUIResource_LineBorderUIResource.h>
#include <scapix/java_api/javax/swing/plaf/BorderUIResource_BevelBorderUIResource.h>
#include <scapix/java_api/javax/swing/plaf/BorderUIResource_EtchedBorderUIResource.h>
#include <scapix/java_api/javax/swing/plaf/BorderUIResource_MatteBorderUIResource.h>
#include <scapix/java_api/javax/swing/plaf/BorderUIResource_TitledBorderUIResource.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::BorderUIResource : public jni::object_base<"javax/swing/plaf/BorderUIResource",
	java::lang::Object,
	javax::swing::border::Border,
	javax::swing::plaf::UIResource,
	java::io::Serializable>
{
public:

	using CompoundBorderUIResource = BorderUIResource_CompoundBorderUIResource;
	using EmptyBorderUIResource = BorderUIResource_EmptyBorderUIResource;
	using LineBorderUIResource = BorderUIResource_LineBorderUIResource;
	using BevelBorderUIResource = BorderUIResource_BevelBorderUIResource;
	using EtchedBorderUIResource = BorderUIResource_EtchedBorderUIResource;
	using MatteBorderUIResource = BorderUIResource_MatteBorderUIResource;
	using TitledBorderUIResource = BorderUIResource_TitledBorderUIResource;

	static jni::ref<javax::swing::border::Border> getEtchedBorderUIResource() { return call_static_method<"getEtchedBorderUIResource", jni::ref<javax::swing::border::Border>>(); }
	static jni::ref<javax::swing::border::Border> getLoweredBevelBorderUIResource() { return call_static_method<"getLoweredBevelBorderUIResource", jni::ref<javax::swing::border::Border>>(); }
	static jni::ref<javax::swing::border::Border> getRaisedBevelBorderUIResource() { return call_static_method<"getRaisedBevelBorderUIResource", jni::ref<javax::swing::border::Border>>(); }
	static jni::ref<javax::swing::border::Border> getBlackLineBorderUIResource() { return call_static_method<"getBlackLineBorderUIResource", jni::ref<javax::swing::border::Border>>(); }
	static jni::ref<javax::swing::plaf::BorderUIResource> new_object(jni::ref<javax::swing::border::Border> p1) { return base_::new_object(p1); }
	void paintBorder(jni::ref<java::awt::Component> p1, jni::ref<java::awt::Graphics> p2, jint p3, jint p4, jint p5, jint p6) { return call_method<"paintBorder", void>(p1, p2, p3, p4, p5, p6); }
	jni::ref<java::awt::Insets> getBorderInsets(jni::ref<java::awt::Component> p1) { return call_method<"getBorderInsets", jni::ref<java::awt::Insets>>(p1); }
	jboolean isBorderOpaque() { return call_method<"isBorderOpaque", jboolean>(); }

protected:

	BorderUIResource(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BORDERUIRESOURCE