// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SNIPPETS_SNIPPETS_MEMORYLAYOUTSNIPPETS_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SNIPPETS_SNIPPETS_MEMORYLAYOUTSNIPPETS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::foreign::snippets { class Snippets_MemoryLayoutSnippets; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::foreign::snippets::Snippets_MemoryLayoutSnippets>
{
	static constexpr fixed_string class_name = "java/lang/foreign/snippets/Snippets$MemoryLayoutSnippets";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SNIPPETS_SNIPPETS_MEMORYLAYOUTSNIPPETS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SNIPPETS_SNIPPETS_MEMORYLAYOUTSNIPPETS)
#define SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SNIPPETS_SNIPPETS_MEMORYLAYOUTSNIPPETS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::foreign::snippets::Snippets_MemoryLayoutSnippets : public jni::object_base<"java/lang/foreign/snippets/Snippets$MemoryLayoutSnippets",
	java::lang::Object>
{
public:


protected:

	Snippets_MemoryLayoutSnippets(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SNIPPETS_SNIPPETS_MEMORYLAYOUTSNIPPETS
