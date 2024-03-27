// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/InputStream.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_DATATRANSFER_DATATRANSFERER_REENCODINGINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_SUN_AWT_DATATRANSFER_DATATRANSFERER_REENCODINGINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::datatransfer { class DataTransferer_ReencodingInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::datatransfer::DataTransferer_ReencodingInputStream>
{
	static constexpr fixed_string class_name = "sun/awt/datatransfer/DataTransferer$ReencodingInputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::InputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_DATATRANSFER_DATATRANSFERER_REENCODINGINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_DATATRANSFER_DATATRANSFERER_REENCODINGINPUTSTREAM)
#define SCAPIX_JAVA_API_SUN_AWT_DATATRANSFER_DATATRANSFERER_REENCODINGINPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/datatransfer/Transferable.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/awt/datatransfer/DataTransferer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::datatransfer::DataTransferer_ReencodingInputStream : public jni::object_base<"sun/awt/datatransfer/DataTransferer$ReencodingInputStream",
	java::io::InputStream>
{
public:

	static jni::ref<sun::awt::datatransfer::DataTransferer_ReencodingInputStream> new_object(jni::ref<sun::awt::datatransfer::DataTransferer> p1, jni::ref<java::io::InputStream> p2, jlong p3, jni::ref<java::lang::String> p4, jni::ref<java::awt::datatransfer::Transferable> p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	jint read() { return call_method<"read", jint>(); }
	jint available() { return call_method<"available", jint>(); }
	void close() { return call_method<"close", void>(); }

protected:

	DataTransferer_ReencodingInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_DATATRANSFER_DATATRANSFERER_REENCODINGINPUTSTREAM
