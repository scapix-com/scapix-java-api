// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_BUMPBUFFER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_BUMPBUFFER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::metal { class BumpBuffer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::metal::BumpBuffer>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/metal/BumpBuffer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_BUMPBUFFER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_BUMPBUFFER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_BUMPBUFFER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Color.h>
#include <scapix/java_api/java/awt/GraphicsConfiguration.h>
#include <scapix/java_api/java/awt/Image.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::metal::BumpBuffer : public jni::object_base<"javax/swing/plaf/metal/BumpBuffer",
	java::lang::Object>
{
public:

	static jni::ref<javax::swing::plaf::metal::BumpBuffer> new_object(jni::ref<java::awt::GraphicsConfiguration> p1, jni::ref<java::awt::Color> p2, jni::ref<java::awt::Color> p3, jni::ref<java::awt::Color> p4) { return base_::new_object(p1, p2, p3, p4); }
	jboolean hasSameConfiguration(jni::ref<java::awt::GraphicsConfiguration> p1, jni::ref<java::awt::Color> p2, jni::ref<java::awt::Color> p3, jni::ref<java::awt::Color> p4) { return call_method<"hasSameConfiguration", jboolean>(p1, p2, p3, p4); }
	jni::ref<java::awt::Image> getImage() { return call_method<"getImage", jni::ref<java::awt::Image>>(); }

protected:

	BumpBuffer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_BUMPBUFFER
