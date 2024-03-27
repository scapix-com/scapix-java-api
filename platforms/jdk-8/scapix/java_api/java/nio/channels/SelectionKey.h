// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SELECTIONKEY_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SELECTIONKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::channels { class SelectionKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::channels::SelectionKey>
{
	static constexpr fixed_string class_name = "java/nio/channels/SelectionKey";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SELECTIONKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SELECTIONKEY)
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SELECTIONKEY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/channels/SelectableChannel.h>
#include <scapix/java_api/java/nio/channels/Selector.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::channels::SelectionKey : public jni::object_base<"java/nio/channels/SelectionKey",
	java::lang::Object>
{
public:

	static jint OP_READ() { return get_static_field<"OP_READ", jint>(); }
	static jint OP_WRITE() { return get_static_field<"OP_WRITE", jint>(); }
	static jint OP_CONNECT() { return get_static_field<"OP_CONNECT", jint>(); }
	static jint OP_ACCEPT() { return get_static_field<"OP_ACCEPT", jint>(); }

	jni::ref<java::nio::channels::SelectableChannel> channel() { return call_method<"channel", jni::ref<java::nio::channels::SelectableChannel>>(); }
	jni::ref<java::nio::channels::Selector> selector() { return call_method<"selector", jni::ref<java::nio::channels::Selector>>(); }
	jboolean isValid() { return call_method<"isValid", jboolean>(); }
	void cancel() { return call_method<"cancel", void>(); }
	jint interestOps() { return call_method<"interestOps", jint>(); }
	jni::ref<java::nio::channels::SelectionKey> interestOps(jint p1) { return call_method<"interestOps", jni::ref<java::nio::channels::SelectionKey>>(p1); }
	jint readyOps() { return call_method<"readyOps", jint>(); }
	jboolean isReadable() { return call_method<"isReadable", jboolean>(); }
	jboolean isWritable() { return call_method<"isWritable", jboolean>(); }
	jboolean isConnectable() { return call_method<"isConnectable", jboolean>(); }
	jboolean isAcceptable() { return call_method<"isAcceptable", jboolean>(); }
	jni::ref<java::lang::Object> attach(jni::ref<java::lang::Object> p1) { return call_method<"attach", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> attachment() { return call_method<"attachment", jni::ref<java::lang::Object>>(); }

protected:

	SelectionKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_SELECTIONKEY
