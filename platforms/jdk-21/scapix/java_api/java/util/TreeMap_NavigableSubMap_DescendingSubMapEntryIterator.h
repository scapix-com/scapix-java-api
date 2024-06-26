// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/TreeMap_NavigableSubMap_SubMapIterator.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_NAVIGABLESUBMAP_DESCENDINGSUBMAPENTRYITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_NAVIGABLESUBMAP_DESCENDINGSUBMAPENTRYITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class TreeMap_NavigableSubMap_DescendingSubMapEntryIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::TreeMap_NavigableSubMap_DescendingSubMapEntryIterator>
{
	static constexpr fixed_string class_name = "java/util/TreeMap$NavigableSubMap$DescendingSubMapEntryIterator";
	using base_classes = std::tuple<scapix::java_api::java::util::TreeMap_NavigableSubMap_SubMapIterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_NAVIGABLESUBMAP_DESCENDINGSUBMAPENTRYITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_NAVIGABLESUBMAP_DESCENDINGSUBMAPENTRYITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_NAVIGABLESUBMAP_DESCENDINGSUBMAPENTRYITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Map_Entry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::TreeMap_NavigableSubMap_DescendingSubMapEntryIterator : public jni::object_base<"java/util/TreeMap$NavigableSubMap$DescendingSubMapEntryIterator",
	java::util::TreeMap_NavigableSubMap_SubMapIterator>
{
public:

	jni::ref<java::util::Map_Entry> next() { return call_method<"next", jni::ref<java::util::Map_Entry>>(); }
	void remove() { return call_method<"remove", void>(); }

protected:

	TreeMap_NavigableSubMap_DescendingSubMapEntryIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_NAVIGABLESUBMAP_DESCENDINGSUBMAPENTRYITERATOR
