// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Closeable.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_MODULE_MODULEREADER_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_MODULE_MODULEREADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::module { class ModuleReader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::module::ModuleReader>
{
	static constexpr fixed_string class_name = "java/lang/module/ModuleReader";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Closeable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MODULE_MODULEREADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_MODULE_MODULEREADER)
#define SCAPIX_JAVA_API_JAVA_LANG_MODULE_MODULEREADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/java/util/Optional.h>
#include <scapix/java_api/java/util/stream/Stream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::module::ModuleReader : public jni::object_base<"java/lang/module/ModuleReader",
	java::lang::Object,
	java::io::Closeable>
{
public:

	jni::ref<java::util::Optional> find(jni::ref<java::lang::String> p1) { return call_method<"find", jni::ref<java::util::Optional>>(p1); }
	jni::ref<java::util::Optional> open(jni::ref<java::lang::String> name) { return call_method<"open", jni::ref<java::util::Optional>>(name); }
	jni::ref<java::util::Optional> read(jni::ref<java::lang::String> name) { return call_method<"read", jni::ref<java::util::Optional>>(name); }
	void release(jni::ref<java::nio::ByteBuffer> bb) { return call_method<"release", void>(bb); }
	jni::ref<java::util::stream::Stream> list() { return call_method<"list", jni::ref<java::util::stream::Stream>>(); }
	void close() { return call_method<"close", void>(); }

protected:

	ModuleReader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MODULE_MODULEREADER
