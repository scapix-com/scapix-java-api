// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_IMAGE_BUFFERSTRATEGY_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_BUFFERSTRATEGY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::image { class BufferStrategy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::image::BufferStrategy>
{
	static constexpr fixed_string class_name = "java/awt/image/BufferStrategy";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_BUFFERSTRATEGY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_IMAGE_BUFFERSTRATEGY)
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_BUFFERSTRATEGY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/BufferCapabilities.h>
#include <scapix/java_api/java/awt/Graphics.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::image::BufferStrategy : public jni::object_base<"java/awt/image/BufferStrategy",
	java::lang::Object>
{
public:

	static jni::ref<java::awt::image::BufferStrategy> new_object() { return base_::new_object(); }
	jni::ref<java::awt::BufferCapabilities> getCapabilities() { return call_method<"getCapabilities", jni::ref<java::awt::BufferCapabilities>>(); }
	jni::ref<java::awt::Graphics> getDrawGraphics() { return call_method<"getDrawGraphics", jni::ref<java::awt::Graphics>>(); }
	jboolean contentsLost() { return call_method<"contentsLost", jboolean>(); }
	jboolean contentsRestored() { return call_method<"contentsRestored", jboolean>(); }
	void show() { return call_method<"show", void>(); }
	void dispose() { return call_method<"dispose", void>(); }

protected:

	BufferStrategy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_BUFFERSTRATEGY