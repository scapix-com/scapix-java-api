// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/AttributeValue.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_BUFFERCAPABILITIES_FLIPCONTENTS_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_BUFFERCAPABILITIES_FLIPCONTENTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class BufferCapabilities_FlipContents; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::BufferCapabilities_FlipContents>
{
	static constexpr fixed_string class_name = "java/awt/BufferCapabilities$FlipContents";
	using base_classes = std::tuple<scapix::java_api::java::awt::AttributeValue>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_BUFFERCAPABILITIES_FLIPCONTENTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_BUFFERCAPABILITIES_FLIPCONTENTS)
#define SCAPIX_JAVA_API_JAVA_AWT_BUFFERCAPABILITIES_FLIPCONTENTS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::BufferCapabilities_FlipContents : public jni::object_base<"java/awt/BufferCapabilities$FlipContents",
	java::awt::AttributeValue>
{
public:

	static jni::ref<java::awt::BufferCapabilities_FlipContents> UNDEFINED() { return get_static_field<"UNDEFINED", jni::ref<java::awt::BufferCapabilities_FlipContents>>(); }
	static jni::ref<java::awt::BufferCapabilities_FlipContents> BACKGROUND() { return get_static_field<"BACKGROUND", jni::ref<java::awt::BufferCapabilities_FlipContents>>(); }
	static jni::ref<java::awt::BufferCapabilities_FlipContents> PRIOR() { return get_static_field<"PRIOR", jni::ref<java::awt::BufferCapabilities_FlipContents>>(); }
	static jni::ref<java::awt::BufferCapabilities_FlipContents> COPIED() { return get_static_field<"COPIED", jni::ref<java::awt::BufferCapabilities_FlipContents>>(); }


protected:

	BufferCapabilities_FlipContents(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_BUFFERCAPABILITIES_FLIPCONTENTS
