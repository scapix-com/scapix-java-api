// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_DALVIK_SYSTEM_DEXFILE_FWD
#define SCAPIX_JAVA_API_DALVIK_SYSTEM_DEXFILE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::dalvik::system { class DexFile; }

template<>
struct scapix::jni::object_traits<scapix::java_api::dalvik::system::DexFile>
{
	static constexpr fixed_string class_name = "dalvik/system/DexFile";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_DALVIK_SYSTEM_DEXFILE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_DALVIK_SYSTEM_DEXFILE)
#define SCAPIX_JAVA_API_DALVIK_SYSTEM_DEXFILE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/dalvik/system/DexFile_OptimizationInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class dalvik::system::DexFile : public jni::object_base<"dalvik/system/DexFile",
	java::lang::Object>
{
public:

	using OptimizationInfo = DexFile_OptimizationInfo;

	static jni::ref<dalvik::system::DexFile> new_object(jni::ref<java::io::File> file) { return base_::new_object(file); }
	static jni::ref<dalvik::system::DexFile> new_object(jni::ref<java::lang::String> fileName) { return base_::new_object(fileName); }
	static jni::ref<dalvik::system::DexFile> loadDex(jni::ref<java::lang::String> sourcePathName, jni::ref<java::lang::String> outputPathName, jint flags) { return call_static_method<"loadDex", jni::ref<dalvik::system::DexFile>>(sourcePathName, outputPathName, flags); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void close() { return call_method<"close", void>(); }
	jni::ref<java::lang::Class> loadClass(jni::ref<java::lang::String> name, jni::ref<java::lang::ClassLoader> loader) { return call_method<"loadClass", jni::ref<java::lang::Class>>(name, loader); }
	jni::ref<java::util::Enumeration> entries() { return call_method<"entries", jni::ref<java::util::Enumeration>>(); }
	static jboolean isDexOptNeeded(jni::ref<java::lang::String> p1) { return call_static_method<"isDexOptNeeded", jboolean>(p1); }

protected:

	DexFile(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_DALVIK_SYSTEM_DEXFILE
