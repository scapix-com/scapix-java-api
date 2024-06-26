// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_JAR_PACK200_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_JAR_PACK200_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::jar { class Pack200; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::jar::Pack200>
{
	static constexpr fixed_string class_name = "java/util/jar/Pack200";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_JAR_PACK200_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_JAR_PACK200)
#define SCAPIX_JAVA_API_JAVA_UTIL_JAR_PACK200

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/jar/Pack200_Packer.h>
#include <scapix/java_api/java/util/jar/Pack200_Unpacker.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::jar::Pack200 : public jni::object_base<"java/util/jar/Pack200",
	java::lang::Object>
{
public:

	using Packer = Pack200_Packer;
	using Unpacker = Pack200_Unpacker;

	static jni::ref<java::util::jar::Pack200_Packer> newPacker() { return call_static_method<"newPacker", jni::ref<java::util::jar::Pack200_Packer>>(); }
	static jni::ref<java::util::jar::Pack200_Unpacker> newUnpacker() { return call_static_method<"newUnpacker", jni::ref<java::util::jar::Pack200_Unpacker>>(); }

protected:

	Pack200(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_JAR_PACK200
