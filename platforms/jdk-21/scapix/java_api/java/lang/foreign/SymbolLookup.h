// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SYMBOLLOOKUP_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SYMBOLLOOKUP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::foreign { class SymbolLookup; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::foreign::SymbolLookup>
{
	static constexpr fixed_string class_name = "java/lang/foreign/SymbolLookup";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SYMBOLLOOKUP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SYMBOLLOOKUP)
#define SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SYMBOLLOOKUP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/foreign/Arena.h>
#include <scapix/java_api/java/nio/file/Path.h>
#include <scapix/java_api/java/util/Optional.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::foreign::SymbolLookup : public jni::object_base<"java/lang/foreign/SymbolLookup",
	java::lang::Object>
{
public:

	jni::ref<java::util::Optional> find(jni::ref<java::lang::String> p1) { return call_method<"find", jni::ref<java::util::Optional>>(p1); }
	jni::ref<java::lang::foreign::SymbolLookup> or_(jni::ref<java::lang::foreign::SymbolLookup> other) { return call_method<"or", jni::ref<java::lang::foreign::SymbolLookup>>(other); }
	static jni::ref<java::lang::foreign::SymbolLookup> loaderLookup() { return call_static_method<"loaderLookup", jni::ref<java::lang::foreign::SymbolLookup>>(); }
	static jni::ref<java::lang::foreign::SymbolLookup> libraryLookup(jni::ref<java::lang::String> name, jni::ref<java::lang::foreign::Arena> arena) { return call_static_method<"libraryLookup", jni::ref<java::lang::foreign::SymbolLookup>>(name, arena); }
	static jni::ref<java::lang::foreign::SymbolLookup> libraryLookup(jni::ref<java::nio::file::Path> path, jni::ref<java::lang::foreign::Arena> arena) { return call_static_method<"libraryLookup", jni::ref<java::lang::foreign::SymbolLookup>>(path, arena); }

protected:

	SymbolLookup(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SYMBOLLOOKUP
