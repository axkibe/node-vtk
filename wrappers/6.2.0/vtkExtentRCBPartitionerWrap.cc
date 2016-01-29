/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkExtentRCBPartitionerWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkExtentRCBPartitionerWrap::ptpl;

VtkExtentRCBPartitionerWrap::VtkExtentRCBPartitionerWrap()
{ }

VtkExtentRCBPartitionerWrap::VtkExtentRCBPartitionerWrap(vtkSmartPointer<vtkExtentRCBPartitioner> _native)
{ native = _native; }

VtkExtentRCBPartitionerWrap::~VtkExtentRCBPartitionerWrap()
{ }

void VtkExtentRCBPartitionerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkExtentRCBPartitioner").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ExtentRCBPartitioner").ToLocalChecked(), ConstructorGetter);
}

void VtkExtentRCBPartitionerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkExtentRCBPartitionerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkExtentRCBPartitionerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DuplicateNodesOff", DuplicateNodesOff);
	Nan::SetPrototypeMethod(tpl, "duplicateNodesOff", DuplicateNodesOff);

	Nan::SetPrototypeMethod(tpl, "DuplicateNodesOn", DuplicateNodesOn);
	Nan::SetPrototypeMethod(tpl, "duplicateNodesOn", DuplicateNodesOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDuplicateNodes", GetDuplicateNodes);
	Nan::SetPrototypeMethod(tpl, "getDuplicateNodes", GetDuplicateNodes);

	Nan::SetPrototypeMethod(tpl, "GetNumExtents", GetNumExtents);
	Nan::SetPrototypeMethod(tpl, "getNumExtents", GetNumExtents);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfGhostLayers", GetNumberOfGhostLayers);
	Nan::SetPrototypeMethod(tpl, "getNumberOfGhostLayers", GetNumberOfGhostLayers);

	Nan::SetPrototypeMethod(tpl, "GetPartitionExtent", GetPartitionExtent);
	Nan::SetPrototypeMethod(tpl, "getPartitionExtent", GetPartitionExtent);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Partition", Partition);
	Nan::SetPrototypeMethod(tpl, "partition", Partition);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDuplicateNodes", SetDuplicateNodes);
	Nan::SetPrototypeMethod(tpl, "setDuplicateNodes", SetDuplicateNodes);

	Nan::SetPrototypeMethod(tpl, "SetGlobalExtent", SetGlobalExtent);
	Nan::SetPrototypeMethod(tpl, "setGlobalExtent", SetGlobalExtent);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfGhostLayers", SetNumberOfGhostLayers);
	Nan::SetPrototypeMethod(tpl, "setNumberOfGhostLayers", SetNumberOfGhostLayers);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfPartitions", SetNumberOfPartitions);
	Nan::SetPrototypeMethod(tpl, "setNumberOfPartitions", SetNumberOfPartitions);

	ptpl.Reset( tpl );
}

void VtkExtentRCBPartitionerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkExtentRCBPartitioner> native = vtkSmartPointer<vtkExtentRCBPartitioner>::New();
		VtkExtentRCBPartitionerWrap* obj = new VtkExtentRCBPartitionerWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkExtentRCBPartitionerWrap::DuplicateNodesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentRCBPartitionerWrap *wrapper = ObjectWrap::Unwrap<VtkExtentRCBPartitionerWrap>(info.Holder());
	vtkExtentRCBPartitioner *native = (vtkExtentRCBPartitioner *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DuplicateNodesOff();
}

void VtkExtentRCBPartitionerWrap::DuplicateNodesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentRCBPartitionerWrap *wrapper = ObjectWrap::Unwrap<VtkExtentRCBPartitionerWrap>(info.Holder());
	vtkExtentRCBPartitioner *native = (vtkExtentRCBPartitioner *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DuplicateNodesOn();
}

void VtkExtentRCBPartitionerWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentRCBPartitionerWrap *wrapper = ObjectWrap::Unwrap<VtkExtentRCBPartitionerWrap>(info.Holder());
	vtkExtentRCBPartitioner *native = (vtkExtentRCBPartitioner *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkExtentRCBPartitionerWrap::GetDuplicateNodes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentRCBPartitionerWrap *wrapper = ObjectWrap::Unwrap<VtkExtentRCBPartitionerWrap>(info.Holder());
	vtkExtentRCBPartitioner *native = (vtkExtentRCBPartitioner *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDuplicateNodes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtentRCBPartitionerWrap::GetNumExtents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentRCBPartitionerWrap *wrapper = ObjectWrap::Unwrap<VtkExtentRCBPartitionerWrap>(info.Holder());
	vtkExtentRCBPartitioner *native = (vtkExtentRCBPartitioner *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumExtents();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtentRCBPartitionerWrap::GetNumberOfGhostLayers(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentRCBPartitionerWrap *wrapper = ObjectWrap::Unwrap<VtkExtentRCBPartitionerWrap>(info.Holder());
	vtkExtentRCBPartitioner *native = (vtkExtentRCBPartitioner *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfGhostLayers();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtentRCBPartitionerWrap::GetPartitionExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentRCBPartitionerWrap *wrapper = ObjectWrap::Unwrap<VtkExtentRCBPartitionerWrap>(info.Holder());
	vtkExtentRCBPartitioner *native = (vtkExtentRCBPartitioner *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1( v8::Local<v8::Array>::Cast( info[1]->ToObject() ) );
			int b1[6];
			if( a1->Length() < 6 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 6; i++ )
			{
				if( !a1->Get(i)->IsInt32() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->Int32Value();
			}
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetPartitionExtent(
				info[0]->Int32Value(),
				b1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtentRCBPartitionerWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentRCBPartitionerWrap *wrapper = ObjectWrap::Unwrap<VtkExtentRCBPartitionerWrap>(info.Holder());
	vtkExtentRCBPartitioner *native = (vtkExtentRCBPartitioner *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtentRCBPartitionerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentRCBPartitionerWrap *wrapper = ObjectWrap::Unwrap<VtkExtentRCBPartitionerWrap>(info.Holder());
	vtkExtentRCBPartitioner *native = (vtkExtentRCBPartitioner *)wrapper->native.GetPointer();
	vtkExtentRCBPartitioner * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkExtentRCBPartitionerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkExtentRCBPartitionerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExtentRCBPartitionerWrap *w = new VtkExtentRCBPartitionerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtentRCBPartitionerWrap::Partition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentRCBPartitionerWrap *wrapper = ObjectWrap::Unwrap<VtkExtentRCBPartitionerWrap>(info.Holder());
	vtkExtentRCBPartitioner *native = (vtkExtentRCBPartitioner *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Partition();
}

void VtkExtentRCBPartitionerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentRCBPartitionerWrap *wrapper = ObjectWrap::Unwrap<VtkExtentRCBPartitionerWrap>(info.Holder());
	vtkExtentRCBPartitioner *native = (vtkExtentRCBPartitioner *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkExtentRCBPartitioner * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkExtentRCBPartitionerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkExtentRCBPartitionerWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExtentRCBPartitionerWrap *w = new VtkExtentRCBPartitionerWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtentRCBPartitionerWrap::SetDuplicateNodes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentRCBPartitionerWrap *wrapper = ObjectWrap::Unwrap<VtkExtentRCBPartitionerWrap>(info.Holder());
	vtkExtentRCBPartitioner *native = (vtkExtentRCBPartitioner *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDuplicateNodes(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtentRCBPartitionerWrap::SetGlobalExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentRCBPartitionerWrap *wrapper = ObjectWrap::Unwrap<VtkExtentRCBPartitionerWrap>(info.Holder());
	vtkExtentRCBPartitioner *native = (vtkExtentRCBPartitioner *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
		int b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGlobalExtent(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsInt32())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetGlobalExtent(
								info[0]->Int32Value(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->Int32Value(),
								info[4]->Int32Value(),
								info[5]->Int32Value()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtentRCBPartitionerWrap::SetNumberOfGhostLayers(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentRCBPartitionerWrap *wrapper = ObjectWrap::Unwrap<VtkExtentRCBPartitionerWrap>(info.Holder());
	vtkExtentRCBPartitioner *native = (vtkExtentRCBPartitioner *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfGhostLayers(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtentRCBPartitionerWrap::SetNumberOfPartitions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentRCBPartitionerWrap *wrapper = ObjectWrap::Unwrap<VtkExtentRCBPartitionerWrap>(info.Holder());
	vtkExtentRCBPartitioner *native = (vtkExtentRCBPartitioner *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfPartitions(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

