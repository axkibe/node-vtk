/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkCommunicatorWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkDataArrayWrap.h"
#include "vtkCharArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCommunicatorWrap::ptpl;

VtkCommunicatorWrap::VtkCommunicatorWrap()
{ }

VtkCommunicatorWrap::VtkCommunicatorWrap(vtkSmartPointer<vtkCommunicator> _native)
{ native = _native; }

VtkCommunicatorWrap::~VtkCommunicatorWrap()
{ }

void VtkCommunicatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCommunicator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Communicator").ToLocalChecked(), ConstructorGetter);
}

void VtkCommunicatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCommunicatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCommunicatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AllGather", AllGather);
	Nan::SetPrototypeMethod(tpl, "allGather", AllGather);

	Nan::SetPrototypeMethod(tpl, "AllGatherV", AllGatherV);
	Nan::SetPrototypeMethod(tpl, "allGatherV", AllGatherV);

	Nan::SetPrototypeMethod(tpl, "AllReduce", AllReduce);
	Nan::SetPrototypeMethod(tpl, "allReduce", AllReduce);

	Nan::SetPrototypeMethod(tpl, "Barrier", Barrier);
	Nan::SetPrototypeMethod(tpl, "barrier", Barrier);

	Nan::SetPrototypeMethod(tpl, "Broadcast", Broadcast);
	Nan::SetPrototypeMethod(tpl, "broadcast", Broadcast);

	Nan::SetPrototypeMethod(tpl, "Gather", Gather);
	Nan::SetPrototypeMethod(tpl, "gather", Gather);

	Nan::SetPrototypeMethod(tpl, "GatherV", GatherV);
	Nan::SetPrototypeMethod(tpl, "gatherV", GatherV);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLeftChildProcessor", GetLeftChildProcessor);
	Nan::SetPrototypeMethod(tpl, "getLeftChildProcessor", GetLeftChildProcessor);

	Nan::SetPrototypeMethod(tpl, "GetLocalProcessId", GetLocalProcessId);
	Nan::SetPrototypeMethod(tpl, "getLocalProcessId", GetLocalProcessId);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfProcesses", GetNumberOfProcesses);
	Nan::SetPrototypeMethod(tpl, "getNumberOfProcesses", GetNumberOfProcesses);

	Nan::SetPrototypeMethod(tpl, "GetParentProcessor", GetParentProcessor);
	Nan::SetPrototypeMethod(tpl, "getParentProcessor", GetParentProcessor);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MarshalDataObject", MarshalDataObject);
	Nan::SetPrototypeMethod(tpl, "marshalDataObject", MarshalDataObject);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Receive", Receive);
	Nan::SetPrototypeMethod(tpl, "receive", Receive);

	Nan::SetPrototypeMethod(tpl, "ReceiveDataObject", ReceiveDataObject);
	Nan::SetPrototypeMethod(tpl, "receiveDataObject", ReceiveDataObject);

	Nan::SetPrototypeMethod(tpl, "Reduce", Reduce);
	Nan::SetPrototypeMethod(tpl, "reduce", Reduce);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "Scatter", Scatter);
	Nan::SetPrototypeMethod(tpl, "scatter", Scatter);

	Nan::SetPrototypeMethod(tpl, "Send", Send);
	Nan::SetPrototypeMethod(tpl, "send", Send);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfProcesses", SetNumberOfProcesses);
	Nan::SetPrototypeMethod(tpl, "setNumberOfProcesses", SetNumberOfProcesses);

	Nan::SetPrototypeMethod(tpl, "SetUseCopy", SetUseCopy);
	Nan::SetPrototypeMethod(tpl, "setUseCopy", SetUseCopy);

	Nan::SetPrototypeMethod(tpl, "UnMarshalDataObject", UnMarshalDataObject);
	Nan::SetPrototypeMethod(tpl, "unMarshalDataObject", UnMarshalDataObject);

	ptpl.Reset( tpl );
}

void VtkCommunicatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCommunicatorWrap::AllGather(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkCommunicatorWrap>(info.Holder());
	vtkCommunicator *native = (vtkCommunicator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataArrayWrap *a1 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[1]->ToObject());
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->AllGather(
				(vtkDataArray *) a0->native.GetPointer(),
				(vtkDataArray *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCommunicatorWrap::AllGatherV(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkCommunicatorWrap>(info.Holder());
	vtkCommunicator *native = (vtkCommunicator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataArrayWrap *a1 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[1]->ToObject());
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->AllGatherV(
				(vtkDataArray *) a0->native.GetPointer(),
				(vtkDataArray *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCommunicatorWrap::AllReduce(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkCommunicatorWrap>(info.Holder());
	vtkCommunicator *native = (vtkCommunicator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataArrayWrap *a1 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->AllReduce(
					(vtkDataArray *) a0->native.GetPointer(),
					(vtkDataArray *) a1->native.GetPointer(),
					info[2]->Int32Value()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCommunicatorWrap::Barrier(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkCommunicatorWrap>(info.Holder());
	vtkCommunicator *native = (vtkCommunicator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Barrier();
}

void VtkCommunicatorWrap::Broadcast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkCommunicatorWrap>(info.Holder());
	vtkCommunicator *native = (vtkCommunicator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->Broadcast(
				(vtkDataObject *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCommunicatorWrap::Gather(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkCommunicatorWrap>(info.Holder());
	vtkCommunicator *native = (vtkCommunicator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataArrayWrap *a1 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->Gather(
					(vtkDataArray *) a0->native.GetPointer(),
					(vtkDataArray *) a1->native.GetPointer(),
					info[2]->Int32Value()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCommunicatorWrap::GatherV(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkCommunicatorWrap>(info.Holder());
	vtkCommunicator *native = (vtkCommunicator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataArrayWrap *a1 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->GatherV(
					(vtkDataArray *) a0->native.GetPointer(),
					(vtkDataArray *) a1->native.GetPointer(),
					info[2]->Int32Value()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCommunicatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkCommunicatorWrap>(info.Holder());
	vtkCommunicator *native = (vtkCommunicator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCommunicatorWrap::GetLeftChildProcessor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkCommunicatorWrap>(info.Holder());
	vtkCommunicator *native = (vtkCommunicator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetLeftChildProcessor(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCommunicatorWrap::GetLocalProcessId(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkCommunicatorWrap>(info.Holder());
	vtkCommunicator *native = (vtkCommunicator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLocalProcessId();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCommunicatorWrap::GetNumberOfProcesses(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkCommunicatorWrap>(info.Holder());
	vtkCommunicator *native = (vtkCommunicator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfProcesses();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCommunicatorWrap::GetParentProcessor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkCommunicatorWrap>(info.Holder());
	vtkCommunicator *native = (vtkCommunicator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetParentProcessor(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCommunicatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkCommunicatorWrap>(info.Holder());
	vtkCommunicator *native = (vtkCommunicator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

void VtkCommunicatorWrap::MarshalDataObject(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkCommunicatorWrap>(info.Holder());
	vtkCommunicator *native = (vtkCommunicator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkCharArrayWrap::ptpl))->HasInstance(info[1]))
		{
			VtkCharArrayWrap *a1 = ObjectWrap::Unwrap<VtkCharArrayWrap>(info[1]->ToObject());
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->MarshalDataObject(
				(vtkDataObject *) a0->native.GetPointer(),
				(vtkCharArray *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCommunicatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkCommunicatorWrap>(info.Holder());
	vtkCommunicator *native = (vtkCommunicator *)wrapper->native.GetPointer();
	vtkCommunicator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCommunicatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCommunicatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCommunicatorWrap *w = new VtkCommunicatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCommunicatorWrap::Receive(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkCommunicatorWrap>(info.Holder());
	vtkCommunicator *native = (vtkCommunicator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->Receive(
					(vtkDataArray *) a0->native.GetPointer(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCommunicatorWrap::ReceiveDataObject(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkCommunicatorWrap>(info.Holder());
	vtkCommunicator *native = (vtkCommunicator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			vtkDataObject * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->ReceiveDataObject(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
				VtkDataObjectWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkDataObjectWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkDataObjectWrap *w = new VtkDataObjectWrap();
			w->native.TakeReference(r);
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCommunicatorWrap::Reduce(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkCommunicatorWrap>(info.Holder());
	vtkCommunicator *native = (vtkCommunicator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataArrayWrap *a1 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					int r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->Reduce(
						(vtkDataArray *) a0->native.GetPointer(),
						(vtkDataArray *) a1->native.GetPointer(),
						info[2]->Int32Value(),
						info[3]->Int32Value()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCommunicatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkCommunicatorWrap>(info.Holder());
	vtkCommunicator *native = (vtkCommunicator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCommunicator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCommunicatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCommunicatorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCommunicatorWrap *w = new VtkCommunicatorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCommunicatorWrap::Scatter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkCommunicatorWrap>(info.Holder());
	vtkCommunicator *native = (vtkCommunicator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataArrayWrap *a1 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->Scatter(
					(vtkDataArray *) a0->native.GetPointer(),
					(vtkDataArray *) a1->native.GetPointer(),
					info[2]->Int32Value()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCommunicatorWrap::Send(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkCommunicatorWrap>(info.Holder());
	vtkCommunicator *native = (vtkCommunicator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->Send(
					(vtkDataArray *) a0->native.GetPointer(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCommunicatorWrap::SetNumberOfProcesses(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkCommunicatorWrap>(info.Holder());
	vtkCommunicator *native = (vtkCommunicator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfProcesses(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCommunicatorWrap::SetUseCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkCommunicatorWrap>(info.Holder());
	vtkCommunicator *native = (vtkCommunicator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseCopy(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCommunicatorWrap::UnMarshalDataObject(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCommunicatorWrap *wrapper = ObjectWrap::Unwrap<VtkCommunicatorWrap>(info.Holder());
	vtkCommunicator *native = (vtkCommunicator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCharArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCharArrayWrap *a0 = ObjectWrap::Unwrap<VtkCharArrayWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataObjectWrap *a1 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[1]->ToObject());
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->UnMarshalDataObject(
				(vtkCharArray *) a0->native.GetPointer(),
				(vtkDataObject *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

