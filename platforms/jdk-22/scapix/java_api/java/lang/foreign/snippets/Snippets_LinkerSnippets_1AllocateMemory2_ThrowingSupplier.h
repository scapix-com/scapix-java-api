// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SNIPPETS_SNIPPETS_LINKERSNIPPETS_1ALLOCATEMEMORY2_THROWINGSUPPLIER_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SNIPPETS_SNIPPETS_LINKERSNIPPETS_1ALLOCATEMEMORY2_THROWINGSUPPLIER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::foreign::snippets { class Snippets_LinkerSnippets_1AllocateMemory2_ThrowingSupplier; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::foreign::snippets::Snippets_LinkerSnippets_1AllocateMemory2_ThrowingSupplier>
{
	static constexpr fixed_string class_name = "java/lang/foreign/snippets/Snippets$LinkerSnippets$1AllocateMemory2$ThrowingSupplier";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SNIPPETS_SNIPPETS_LINKERSNIPPETS_1ALLOCATEMEMORY2_THROWINGSUPPLIER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SNIPPETS_SNIPPETS_LINKERSNIPPETS_1ALLOCATEMEMORY2_THROWINGSUPPLIER)
#define SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SNIPPETS_SNIPPETS_LINKERSNIPPETS_1ALLOCATEMEMORY2_THROWINGSUPPLIER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::foreign::snippets::Snippets_LinkerSnippets_1AllocateMemory2_ThrowingSupplier : public jni::object_base<"java/lang/foreign/snippets/Snippets$LinkerSnippets$1AllocateMemory2$ThrowingSupplier",
	java::lang::Object>
{
public:

	jni::ref<java::lang::Object> get() { return call_method<"get", jni::ref<java::lang::Object>>(); }

protected:

	Snippets_LinkerSnippets_1AllocateMemory2_ThrowingSupplier(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SNIPPETS_SNIPPETS_LINKERSNIPPETS_1ALLOCATEMEMORY2_THROWINGSUPPLIER
