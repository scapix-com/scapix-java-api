// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/foreign/Arena.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SNIPPETS_SNIPPETS_ARENASNIPPETS_SLICINGARENA_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SNIPPETS_SNIPPETS_ARENASNIPPETS_SLICINGARENA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::foreign::snippets { class Snippets_ArenaSnippets_SlicingArena; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::foreign::snippets::Snippets_ArenaSnippets_SlicingArena>
{
	static constexpr fixed_string class_name = "java/lang/foreign/snippets/Snippets$ArenaSnippets$SlicingArena";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::foreign::Arena>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SNIPPETS_SNIPPETS_ARENASNIPPETS_SLICINGARENA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SNIPPETS_SNIPPETS_ARENASNIPPETS_SLICINGARENA)
#define SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SNIPPETS_SNIPPETS_ARENASNIPPETS_SLICINGARENA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/foreign/MemorySegment.h>
#include <scapix/java_api/java/lang/foreign/MemorySegment_Scope.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::foreign::snippets::Snippets_ArenaSnippets_SlicingArena : public jni::object_base<"java/lang/foreign/snippets/Snippets$ArenaSnippets$SlicingArena",
	java::lang::Object,
	java::lang::foreign::Arena>
{
public:

	jni::ref<java::lang::foreign::MemorySegment> allocate(jlong byteSize, jlong p2) { return call_method<"allocate", jni::ref<java::lang::foreign::MemorySegment>>(byteSize, p2); }
	jni::ref<java::lang::foreign::MemorySegment_Scope> scope() { return call_method<"scope", jni::ref<java::lang::foreign::MemorySegment_Scope>>(); }
	void close() { return call_method<"close", void>(); }

protected:

	Snippets_ArenaSnippets_SlicingArena(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SNIPPETS_SNIPPETS_ARENASNIPPETS_SLICINGARENA
